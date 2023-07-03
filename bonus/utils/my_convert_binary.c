/*
** EPITECH PROJECT, 2022
** my_put_binary
** File description:
** diplays an binary
*/

#include <my_printf.h>
#include <my_utils.h>

int my_convert_binary(int nbr)
{
    int result = 0;
    int tmp = 0;
    int multi = 1;

    while (nbr != 0) {
        tmp = nbr % 2;
        nbr = nbr / 2;
        result += tmp * multi;
        multi *= 10;
    }
    return (result);
}
