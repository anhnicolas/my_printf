/*
** EPITECH PROJECT, 2022
** test_my_printf
** File description:
** teste le my_printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_printf(const char *format, ...);

void redirec_stdout(void)
{
    cr_redirect_stdout();
}

Test (my_printf, basic, .init = cr_redirect_stdout){
    my_printf("nbr = %i", 42);
    cr_assert_stdout_eq_str("nbr = 42", "");
}
