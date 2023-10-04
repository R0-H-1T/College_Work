from django.shortcuts import render  #this is helping in rendering the html templates
from django.http import HttpResponse

# Create your views here.

def home(request): 
    return render(request, 'blog/home.html')


def about(request):
    return render(request, 'blog/about.html')


def register(request):
    return render(request, 'blog/register.html')