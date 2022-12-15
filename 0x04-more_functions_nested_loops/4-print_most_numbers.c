#include "main.h"
/**
 * print_most_numbers - prints numbers without 2 and 4
 *
 * Return: 0
 *
 */
void print_most_numbers(void)
{
	int mossy;

	mossy = 0;
	while (mossy < 10)
	{
		if (mossy != 2 && mossy != 4)
		{
			_putchar(mossy + '0');
		}
	}
	_putchar('\n');
}
