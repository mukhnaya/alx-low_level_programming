#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_numbers - print numbers supplied
 * @separator: string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int pau;
	va_list val_list;

	va_start(val_list, n);
	for (pau = 0; pau < n; pau++)
	{
		printf("%d", va_arg(val_list, int));
		if (pau < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	va_end(val_list);
	printf("\n");
}
