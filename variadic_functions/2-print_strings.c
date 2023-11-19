#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - check the code
 * @n : const unsigned int
 * Return: sum.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int i;

    va_list args;
    va_start(args, n);

    for (i = 0; i < n; i++)

    {

        printf("%s", strnl(va_arg(args, char *)));

        if (separator != NULL && i < n - 1)
        {
            printf("%s", separator);
        }
    }
    va_end(args);
    printf("\n");
}

char *strnl(char *s)

{
    char *n = "(nil)";
    if (s == NULL)
    {
        return (n);
    }
    else
    {
        return (s);
    }
}