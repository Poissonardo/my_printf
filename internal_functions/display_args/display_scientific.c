/*
** EPITECH PROJECT, 2023
** Created by seila.aillet@epitech.eu on 26/10/23.
** File description:
** display_floating_pointer.c
*/

#include "../../includes/base_lib.h"
#include "../../includes/internal_functions.h"
#include <stdarg.h>

static void inferior(double nb)
{
    int i = 0;

    for (; nb < 1; i++) {
        nb *= 10;
    }
    display_double(nb);
    my_putchar('e');
    my_putchar('-');
    my_putchar('0');
    my_put_nbr(i);
}

static void superior(double nb)
{
    int i = 0;

    for (; nb > 9; i++) {
        nb /= 10;
    }
    display_double(nb);
    my_putchar('e');
    my_putchar('+');
    if (i < 9) {
    my_putchar('0');
    }
    my_put_nbr(i);
}

void display_scientific(double a)
{
    double nb = a;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb < 1) {
        inferior(nb);
    }
    if (nb > 1) {
        superior(nb);
    }
}
