#include <stdio.h>
/**
 * main - function as entry point
 *
 * Return: 0 - returns nothing
 *
 */

int main(void)
{
	int m;

	m = 0;
	while (m < 10)
	{
		putchar((m % 10) + '0');
		if (m == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
		m++;
	}
	putchar('\n');
	return (0);
}
