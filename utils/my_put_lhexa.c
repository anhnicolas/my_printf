/*
** EPITECH PROJECT, 2022
** my_put_lhexa
** File description:
** diplays an hexa
*/

#include <my_printf.h>
#include <my_utils.h>

int my_put_lhexa(int nbr)
{
    char result[100];
    int tmp = 0;
    int dif = 0;
    int count = 0;
    while (nbr != 0){
        tmp = nbr % 16;
        if (tmp > 9){
            dif = tmp - 9;
            tmp = dif + 96;
            result[count] = tmp;
        } else
            result[count] = tmp + 48;
        nbr = nbr / 16;
        count++;
    }
    result[count] = '\0';
    for (; count != -1; count--)
        my_putchar(result[count]);
    return 0;
}
