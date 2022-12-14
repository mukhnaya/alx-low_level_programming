#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * Return: returns 0
 *
 */
int main(void)
{
	int k;
	int m;

	k = 0;
	while (k < 1024)
	{
		if ((k % 3 == 0) || (k % 5 == 0))
		{
			m = m + k;
		}
		k++;
	}
	printf("%d\n", m);
	return (0);
}
