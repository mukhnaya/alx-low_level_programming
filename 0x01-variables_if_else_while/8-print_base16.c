#include <stdio.h>
/**
 * main - entry point for c programs
 *
 * Return: 0 - evaluates to nothing
 *
 */

int main(void)
{
	int i;
	char j;

	i = 0;
	j = 'a';

	while (i <= 9)
	{
		putchar((i % 10) + '0');
		i++;
	}
	while (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
