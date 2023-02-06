#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * binary_to_uint - converts binary to unsigned in
 * @b: pointing to 0 and 1
 * Return: usigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val;
	int i;

	if (b == NULL)
		return (0);
	while (b[i] == '0' || b[i])
	{
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	return (val);
}
