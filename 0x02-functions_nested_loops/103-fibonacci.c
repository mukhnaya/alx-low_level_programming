#include <stdio.h>
#include "main.h"
/**
 * main- entry point
 *
 * Return: nothing
 *
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;

	while (k + j < 4000000)
	{
		k += j;
		if (k % 2 == 0)
		{
			sum += k;
		}
		j = k - j;
		i++;
	}
	printf("%ld\n", sum);
	return (0);
}
