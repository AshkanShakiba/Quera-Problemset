from django.http import JsonResponse
from django.core.exceptions import PermissionDenied
from django.contrib.auth import authenticate, login
from django.contrib.auth.forms import UserCreationForm
from django.shortcuts import render, get_object_or_404, redirect, reverse

from app.models import Movie, Seat, Ticket


def list_movies(request):
    return render(request, 'app/movies.html', {
        'movies': Movie.objects.all()
    })


def list_seats(request, movie_id):
    movie = get_object_or_404(Movie, id=movie_id)
    tickets = Ticket.objects.filter(movie=movie)
    seats = list(Seat.objects.all())

    for ticket in tickets:
        seats.remove(ticket.seat)

    return render(request, 'app/seats.html', {
        'movie': movie,
        'seats': seats
    })


def reserve_seat(request, movie_id, seat_id):
    if request.user.is_authenticated:
        movie = Movie.objects.get(id=movie_id)
        seat = Seat.objects.get(id=seat_id)
        Ticket.objects.create(movie=movie, user=request.user, seat=seat)
        return redirect(reverse("list_seats", kwargs={"movie_id": movie_id}))
    else:
        return redirect(reverse("login") + f"?next=" + reverse("list_seats", kwargs={"movie_id": movie_id}))


def stats(request):
    if request.user.is_superuser:
        stats_list = []

        seats = Seat.objects.all().order_by("id")
        for seat in seats:
            stats_list.append({"seat__number": seat.number, "total": 0})

        tickets = Ticket.objects.all()
        for ticket in tickets:
            stats_list[ticket.seat.id - 1]["total"] += 1

        return JsonResponse({"stats": stats_list})

    else:
        raise PermissionDenied  # 403


def signup(request):
    if request.method == 'POST':
        form = UserCreationForm(request.POST)
        if form.is_valid():
            form.save()
            username = form.data["username"]
            password = form.data["password1"]
            user = authenticate(username=username, password=password)
            login(request, user)
            return redirect(reverse("list_movies"))
    else:
        form = UserCreationForm()
    return render(request, 'registration/signup.html', {'form': form})
