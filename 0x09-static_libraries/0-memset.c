#include "main.h"
/**
 * _memset - function to set memory
 * @s: is the pointed memory address
 * @b: to fill s
 * @n: specifies number of characters to fill
 * Return: pointer to the memory area
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	c = 0;
	while (c < n)
	{
		s[c] = b;
		c++;
	}
	return (s);
}
