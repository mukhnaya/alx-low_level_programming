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

	for (p = 0; p < n; p++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		else
		{
			for (q = 1; q < p; q++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
