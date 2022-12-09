#include <stdio.h>
/**
 * main - function that is the entry point
 *
 * Return: 0 - returns nothing
 *
 */

int main(void)
{
	int a;

	a = 0;
	while (a <= 9)
	{
		putchar((a % 10) + '0');
		a++;
	}
	putchar('\n');
	return (0);
}
