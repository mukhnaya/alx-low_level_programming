#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 - Returns nothing
 *
 */

int main(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i <= 9)
	{
		while (j <= 9)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');

			if (i == 9 && j == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
