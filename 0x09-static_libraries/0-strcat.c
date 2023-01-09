#include "main.h"
/**
 * _strcat - function to concatenate strings
 *
 * @dest: - first string
 * @src: - second string
 *
 * Return: - dest
 *
 */
char *_strcat(char *dest, char *src)
{
	int pau = 0;
	int pau_length = 0;

	while (dest[pau++])
	{
		pau_length++;
	}
	for (pau = 0; src[pau]; pau++)
	{
		dest[pau_length++] = src[pau];
	}
		return (dest);
}
