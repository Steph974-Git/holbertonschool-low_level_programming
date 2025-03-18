#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;
    if (n == 0)
        return;

    if (separator == NULL)
        separator = "";
    for (i = 0; i < n; i++)
    {
        printf("%d", va_arg(args, int));
    va_end(args);
    printf("\n");
    }

    for (i = 0; i < n; i++)
        va_arg(args, int);

    va_end(args);
    printf ('\n');

}