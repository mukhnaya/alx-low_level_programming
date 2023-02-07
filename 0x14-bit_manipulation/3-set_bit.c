#include "main.h"
/**
 * set_bit - insert 1 at given index
 * @n: is the decimal value
 * @index: is the index where to insert 1
 * Return: 1 if successful and -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index  < sizeof(n) *  8)
	{
		*n =  *n | (1 << index);
		return (1);
	}
	return (-1);
}
