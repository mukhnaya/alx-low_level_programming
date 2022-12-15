#include "main.h"
/**
 * print_diagonal - to print diagnol line
 *
 * @n: is the number of times
 *
 * Return: 0 value
 */
void print_diagonal(int n)
{
	int p;
	int q;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (p = 1; p <= n; p++)
		{
			for (q = 1; q < p; q++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
