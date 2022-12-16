#include "main.h"
#include <stdio.h>
/**
 * print_number - prints an integer
 * @n: is the integer input
 *
 * Return: value is nothing
 */
void print_number(int n)
{
	unsigned int h;

	if (n < 0)
	{
		_putchar('-');
		h = -n;
	}
	else
	{
		h = n;
	}
	if (h / 10 != 0)
	{
		print_number(h / 10);
	}
	_putchar((h % 10) + '0');
}
