from django import forms
from django.forms import ModelForm
from .models import Product
from django.core.exceptions import ValidationError


class ProductForm(ModelForm):
    class Meta:
        model = Product
        fields = ['category', 'name', 'description', 'price', 'stock']

    def clean_price(self):
        data = self.cleaned_data['price']
        if data > 1000:
            raise ValidationError("Product is too expensive")
        else:
            return data

    def clean_description(self):
        data = self.cleaned_data['description']
        if len(data) <= 20:
            raise ValidationError("Product must have a good description")
        else:
            return data
