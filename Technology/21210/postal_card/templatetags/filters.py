from django import template

register = template.Library()


@register.filter(name='persian_number')
def persian_number(value, arg):
    output = value
    english_numbers_to_persian = {
        "0": "۰",
        "1": "۱",
        '2': "۲",
        "3": "۳",
        "4": "۴",
        "5": "۵",
        "6": "۶",
        '7': "۷",
        "8": "۸",
        "9": "۹",
    }
    for english_number in english_numbers_to_persian:
        persian_number = english_numbers_to_persian[english_number]
        output = output.replace(english_number, persian_number)
    return output
