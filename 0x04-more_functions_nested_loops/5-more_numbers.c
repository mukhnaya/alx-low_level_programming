#include "main.h"
/**
 * more_numbers - to print numbers 10 times
 *
 * Return: 0 value
 */
void more_numbers(void)
{
	int mossy;
	int pauline;

	mossy = 0;
	while (mossy < 11)
	{
		pauline = 0;
		while (pauline < 15)
		{
			_putchar(pauline + '0');
			pauline++;
		}
		_putchar('\n');
		mossy++;
	}
	_putchar('\n');
}
