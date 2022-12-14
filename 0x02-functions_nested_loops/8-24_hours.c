#include "main.h"
/**
 * jack_bauer -  prints hours and minutes of a day
 */
void jack_bauer(void)
{
	int firstHouNumber, secondHourNumber;
	int firstminuteNumber, secondMinutenumber;

	firstHouNumber = 0;
	while (firstHouNumber <= 2)
	{
		secondHourNumber = 0;
		while (secondHourNumber <= 9)
		{
			if ((firstHouNumber <= 1 && secondHourNumber <= 9) ||
			(firstHouNumber <= 2 && secondHourNumber <= 3))
			{
				firstminuteNumber = 0;
				while (firstminuteNumber <= 5)
				{
					secondMinutenumber = 0;
					while (secondMinutenumber <= 9)
					{
						_putchar(firstHouNumber + '0');
						_putchar(secondHourNumber + '0');
						_putchar(58);
						_putchar(firstminuteNumber + '0');
						_putchar(secondMinutenumber + '0');
						_putchar('\n');
						secondMinutenumber++;
					}
					firstminuteNumber++;
				}
			}
			secondHourNumber++;
		}
		firstHouNumber++;
	}

}
