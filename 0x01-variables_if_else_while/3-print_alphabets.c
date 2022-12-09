#include <stdio.h>
/**
 * main - function as the entry point
 *
 * Return: 0 - returns nothing
 *
 */

int main(void)
{
	char k;
	char m;

	k = 'a';
	m = 'A';

	while (k <= 'z')
	{
		putchar(k);
		k++;
	}
	while (m <= 'Z')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
