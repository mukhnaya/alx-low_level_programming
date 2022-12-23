#include "main.h"
/**
 * print_array - reversing function
 *
 * @a: integer arrays
 * @n: elements swapping
 *
 * Return: nothing
 *
 */
void print_array(int *a, int n)
{
	int x, y;

	for (y = n - 1; y >= n / 2; y--)
	{
		x = a[n - 1 - y];
		a[n - 1 - y] = a[y];
		a[y] = x;
	}
}
