/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** display_and_count_float.c
*/

#include "../../includes/internal_functions.h"

void display_and_count_float(va_list ptr)
{
    double to_print = va_arg(ptr, double);

    display_float(to_print);
}
