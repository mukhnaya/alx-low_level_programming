#include "main.h"
/**
 * print_number - function to print integers
 *
 * @n: is the integer input
 *
 * Return: integer
 *
 */
void print_number(int n)
{
	unsigned int h = n;

	if (n < 0)
	{
		_putchar('-');
		h = -h;
	}
	if ((h / 10) > 0)
		print_number(h / 10);
	_putchar((h % 10) + '0');
}
