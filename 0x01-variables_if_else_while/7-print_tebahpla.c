#include <stdio.h>
/**
 * main - function as entry point
 *
 * Return: 0 - because returns nothing
 *
 */

int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
