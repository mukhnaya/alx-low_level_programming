#include "main.h"
/**
 * print_triangle - triangle
 *
 * @size: input
 *
 * Return: 0 value
 */
void print_triangle(int size)
{
	int m;
	int n;

	if (size > 0)
	{
		for (m = size; m > 0; m--)
		{
			for (n = 1; n <= size; n++)
			{
				if (n >= m)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
