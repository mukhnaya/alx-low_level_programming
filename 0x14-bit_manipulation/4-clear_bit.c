#include "main.h"
/**
 * clear_bit - inserts bit 0 at given index
 * @n: decimal number
 * @index: index
 * Return: 1 if succesfull and -1 if unsuccessfull
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mos = 1;
	unsigned int pau = sizeof(n) * 8;

	if (*n == '\0')
	{
		return (-1);
	}
	if (index > pau)
	{
		return (-1);
	}
	mos <<= index;
	*n &= ~mos;
	return (1);
}
