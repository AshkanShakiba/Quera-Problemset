from .models import Order
from django.http import JsonResponse
from django.shortcuts import get_object_or_404


def checkout(request, order_pk):
    total_price = 0.0
    order = get_object_or_404(Order, pk=order_pk)
    for item in order.orderitem_set.all():
        quantity = float(item.quantity)
        price = float(item.product.price)
        total_price += quantity * price
    return JsonResponse({"total_price": str(round(total_price, 2))})
