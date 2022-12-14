#include <stdio.h>
#include "main.h"
/**
 * main - function
 *
 * Return: Nothing
 *
 */
int main(void)
{
	int k = 0;
	long m;
	long n;

	m = 1;
	n = 2;
	while (k < 50)
	{
		if (k == 0)
		{
			printf("%ld", m);
		}
		else if (k == 1)
		{
			printf(", %ld", n);
		}
		else
		{
			m = m + n;
			n = m - n;
			printf(", %ld", n);
		}
		++k;
	}
	printf("\n");
	return (0);
}
