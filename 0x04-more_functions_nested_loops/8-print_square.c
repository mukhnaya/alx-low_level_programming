#include "main.h"
/**
 * print_square - prints square
 *
 * @size: is the input value
 *
 * Return: returning 0
 */
void print_square(int size)
{
	int p;
	int q;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (p = 1; p <= size; p++)
		{
			_putchar('#');
			for (q = 1; q <= size; q++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
