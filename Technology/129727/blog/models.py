from django.db import models
from account.models import User


class Category(models.Model):
    title = models.CharField(max_length=50)
    status = models.BooleanField(default=True)


class Article(models.Model):
    author = models.ForeignKey(User, null=True, on_delete=models.CASCADE)
    title = models.CharField(max_length=100)
    category = models.ForeignKey(Category, null=True, on_delete=models.SET_NULL)
    body = models.TextField()
    created = models.DateTimeField(auto_now_add=True)
    updated = models.DateTimeField(auto_now=True, null=True)
    published = models.DateTimeField(auto_now_add=True)
    status = models.CharField(max_length=1, null=False, default="d")
