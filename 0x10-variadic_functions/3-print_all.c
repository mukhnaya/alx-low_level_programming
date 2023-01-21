#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - prints all strings
 * @separator: sting printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int pau;
	va_list mos;
	char *jos;

	va_start(mos, n);
	for (pau = 0; pau < n; pau++)
	{
		jos = va_arg(mos, char*);
		if (jos == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", jos);
		}
		if (pau < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(mos);
}
