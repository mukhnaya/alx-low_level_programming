#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - to add all numbers
 * @n: number of entered numbers
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int add;
	unsigned int pau;
	unsigned int k;
	va_list val_list;

	va_start(val_list, n);
	add = 0;
	pau = 0;
	if (n == 0)
	{
		return (0);
	}
	while (pau < n)
	{
		k = va_arg(val_list, unsigned int);
		add += k;
		pau++;
	}
	va_end(val_list);
	_putchar('\n');
	return (add);
}
