#include "main.h"
/**
 * _strncpy - function to copy
 *
 * @dest: - first string
 * @src: - second string
 * @n: characters to copy
 *
 * Return: dest
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int pau = 0;
	int src_length = 0;

	while (src[pau++])
	{
		src_length++;
	}
	for (pau = 0; src[pau] && pau < n; pau++)
	{
		dest[pau] = src[pau];
	}
	for (pau = src_length; pau < n; pau++)
	{
		dest[pau] = '\0';
	}
	return (dest);
}
