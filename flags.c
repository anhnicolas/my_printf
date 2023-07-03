/*
** EPITECH PROJECT, 2022
** B-CPE-101-LIL-1-1-myprintf-elliot.alladaye
** File description:
** flags
*/

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <my_printf.h>
#include <my_utils.h>

int check_flags(char const *format, int i)
{
    int number;
    int j = 0;

    if (my_isdigit(format[i]) == 0) {
        number = my_getnbr(format + i);
        for (; j < number; j++)
            my_putchar(' ');
    }
    return 0;
}

int check_format(char const *format, va_list ap, int i)
{
    for (; my_isdigit(format[i]) != 1; i++)
    check_flags(format, i);
    check_type(format, ap, i);
    return i;
}
