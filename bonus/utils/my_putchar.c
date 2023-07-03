/*
** EPITECH PROJECT, 2022
** my_putchar.c
** File description:
** my_putchar
*/

#include <my_printf.h>
#include <my_utils.h>
#include <unistd.h>

void my_putchar (char c)
{
    write(1, &c, 1);
}
