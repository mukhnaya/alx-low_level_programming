#include "main.h"
/**
 * _strncat - function to concatenate strings
 *
 * @dest: - first string
 * @src: - second string
 * @n: -  for bytes
 *
 * Return: - dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int pau = 0;
	int pau_length = 0;

	while (dest[pau++])
	{
		pau_length++;
	}
	for (pau = 0; src[pau] && pau < n; pau++)
	{
		dest[pau_length++] = src[pau];
	}
		return (dest);
}
