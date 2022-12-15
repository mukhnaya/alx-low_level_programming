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

	for (mossy = 0; mossy < 10; mossy++)
	{
		pauline = 0;
		for (pauline = 0; pauline < 15; pauline++)
		{
			if (pauline >= 10)
			{
				_putchar((pauline / 10) + '0');
			}
			_putchar((pauline % 10) + '0');
		}
		_putchar('\n');
	}
}
