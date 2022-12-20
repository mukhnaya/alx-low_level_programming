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

	k = 0;
	while (k < (n - 1))
	{
		printf("%d, ", a[k]);
		k++;
	}
	printf("\n");
}
