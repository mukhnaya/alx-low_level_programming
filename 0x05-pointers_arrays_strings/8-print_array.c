#include <stdio.h>
#include "main.h"
/**
 * print_array - print elements of array
 *
 * @a: array
 * @n: number of elements
 *
 * Return: 0
 *
 */
void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < (n - 1); k++)
	{
		printf("%d, ", a[k]);
		if (k == (n - 1))
			printf("%d", a[n - 1]);
	}
	printf("\n");
}
