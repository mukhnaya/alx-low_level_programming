#include "main.h"
/**
 * times_table - function for timetable
 *
 * Return: nothing
 *
 */
void times_table(void)
{
	int first;
	int second;
	int third;
	int forth;
	int fifth;

	first = 0;
	while (first < 10)
	{
		second = 0;
		while (second < 10)
		{
			third = first * second;
			if (third > 9)
			{
				forth = third % 10;
				fifth = (third - forth) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(fifth + '0');
				_putchar(forth + '0');
			}
			else
			{
				if (second != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(third + '0');
			}
			second++;
		}
		first++;
		_putchar('\n');
	}
}
