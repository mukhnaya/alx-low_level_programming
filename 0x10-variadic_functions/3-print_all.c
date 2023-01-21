#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list jos;
	char *jul;
	char *mos;
	int pau;

	va_start(jos, format);
	pau = 0;
	while (format && format[pau])
	{
		mos = "";
		if (format[pau + 1])
		{
			mos = ", ";
		}
		switch (format[pau])
		{
			case 'c':
				printf("%c%s", va_arg(jos, int), mos);
				break;
			case 'i':
				printf("%d%s", va_arg(jos, int), mos);
				break;
			case 'f':
				printf("%f%s", va_arg(jos, double), mos);
				break;
			case 's':
				jul = va_arg(jos, char *);
				if (!jul || !*jul)
				{
					jul = "(nil)";
				}
				printf("%s%s", jul, mos);
				break;
		}
		pau++;
	}
	printf("\n");
}
