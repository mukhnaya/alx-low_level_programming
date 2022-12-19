#include "main.h"
/**
 * swap_int - to swap values
 *
 * @a: first pointer to the first variable
 * @b: second pointer
 *
 * Return: voide
 *
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;

}
