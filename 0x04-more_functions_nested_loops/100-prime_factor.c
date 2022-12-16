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

	for (p = 2; p < q; p++)
	{
		while (p % q == 0)
			q = q / p;
	}
	printf("%lu\n", p);
	return (0);
}
