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
			if (pauline >= 10)
			{
				_putchar((pauline / 10) + '0');
			}
			_putchar((pauline % 10) + '0');
			pauline++;
		}
		mossy++;
		_putchar('\n');
	}
}
