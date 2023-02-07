#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned in
 * @b: pointing to 0 and 1
 * Return: usigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val;
	unsigned int i;
	unsigned int mos;

	val = 0;
	mos = 1;
	i = 0;
	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		val <<= 1;
		if (b[i] == '1')
		{
			val ^= mos;
		}
		i++;
	}
	return (val);
}
