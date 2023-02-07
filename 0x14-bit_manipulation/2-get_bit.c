#include "main.h"
/**
 * get_bit - return bit at index
 * @n: is the integer value
 * @index: the index
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mos;

	mos = 1;
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	mos <<= index;
	if (mos &  n)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
