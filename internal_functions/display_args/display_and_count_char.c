/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** display_and_count_char.c
*/

#include "../../includes/base_lib.h"
#include "../../includes/internal_data_structures.h"

void display_and_count_char(va_list to_print)
{
    char to_display = va_arg(to_print, int);

    my_putchar(to_display);
}
