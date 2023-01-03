#include "main.h"
/**
 * _memcpy - function to copy
 * @src: source area
 * @dest: destination area
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	c = 0;
	while (c < n)
	{
		dest[c] = src[c];
	}
	return (dest);
}
