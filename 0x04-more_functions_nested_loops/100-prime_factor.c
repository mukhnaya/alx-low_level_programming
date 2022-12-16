#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 value
 */
int main(void)
{
	long p;
	long  q;

	p = 612852475143;
	for (q = 2; q < p; q++)
	{
		while (p % q == 0)
			p = p / q;
	}
	printf("%lu\n", p);
	return (0);
}
