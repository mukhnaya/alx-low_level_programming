#include "main.h"
/**
 * print_line - to draw a line
 *
 * @n: is the input value
 * Return: 0 - no value
 *
 */
void print_line(int n)
{
	int p;

	p = 0;
	while (p <= n)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		else
		{
			_putchar('_');
		}
		p++;
	}
	_putchar('\n');
}
