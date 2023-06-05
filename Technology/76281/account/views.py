from django.shortcuts import render, reverse, redirect
from django.contrib.auth.decorators import login_required
from django.contrib.auth import logout, authenticate

from .models import Account, Team
from .forms import SignUpForm, LoginForm, TeamForm


def home(request):
    if request.method == "GET":
        account = Account.objects.get(id=request.user.id)
        if account.team is not None:
            team_name = account.team.name
        else:
            team_name = "None"
        return render(request, "home.html", {"team": team_name})
    else:
        raise Exception


def signup(request):
    if request.method == "GET":
        form = SignUpForm()
        return render(request, "signup.html", {"form": form})
    elif request.method == "POST":
        form = SignUpForm(request.POST)
        if form.is_valid():
            form.save()
            return redirect(reverse("team"))
    else:
        raise Exception


def login_account(request):
    if request.method == "GET":
        form = LoginForm()
        return render(request, "login.html", {"form": form})
    elif request.method == "POST":
        form = LoginForm(request.POST)
        username = form.data["username"]
        password = form.data["password"]
        user = authenticate(username=username, password=password)
        if user is not None:
            return redirect(reverse("home"))
        else:
            return redirect(reverse("login"))
    else:
        raise Exception


def logout_account(request):
    if request.method == "GET":
        logout(request)
    else:
        raise Exception


@login_required
def joinoradd_team(request):
    if request.method == "GET":
        account = Account.objects.get(id=request.user.id)
        if account.team is not None:
            return redirect(reverse("home"))
        else:
            form = TeamForm()
            return render(request, "team.html", {"form": form})
    elif request.method == "POST":
        form = TeamForm(request.POST)
        if form.is_valid():
            team_name = form.data["name"]
            team = Team.objects.get_or_create(name=team_name, jitsi_url_path="http://meet.jit.si/" + team_name)[0]
            account = Account.objects.get(id=request.user.id)
            account.team = team
            account.save()
        return redirect(reverse("home"))
    else:
        raise Exception


def exit_team(request):
    if request.method == "GET":
        account = Account.objects.get(id=request.user.id)
        account.team = None
        account.save()
        return redirect(reverse("home"))
    else:
        raise Exception
