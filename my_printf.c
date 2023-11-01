/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** internal_data_structure.h
*/

#include <stdarg.h>
#include <stdio.h>
#include "includes/base_lib.h"
#include "includes/conversion_specifiers_array.h"
#include "includes/internal_functions.h"

void variables_handler(specifier_t specifiers, va_list ptr)
{
    for (int i = 0; i < 16; i++) {
        if (conversion_specifiers_array[i].convertion_specifier
            == specifiers.conversion) {
            conversion_specifiers_array[i].ptr(ptr, specifiers);
        }
    }
}

void my_printf(const char *format, ...)
{
    va_list ptr;
    specifier_t specifiers;

    va_start(ptr, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            specifiers = collect_flags(&format[i + 1]);
            variables_handler(specifiers, ptr);
            i++;
            continue;
        }
        my_putchar(format[i]);
    }
    va_end(ptr);
}

/*
int main(void)
{
    double test = 213091.19283210391839;
    printf("Sample text %e sample text\n", test);
    my_printf("Sample text %e sample text\n", test);
}
*/
