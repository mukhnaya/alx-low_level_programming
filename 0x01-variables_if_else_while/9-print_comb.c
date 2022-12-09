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

	for (m = 0; m <= 9; m++)
	{
		putchar((m % 10) + '0');
		if (m == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
