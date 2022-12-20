#include "main.h"
/**
 * _strcpy - to copy
 *
 * @dest: - copy to where
 * @src: - copy from where
 *
 * Return: dest value
 *
 */
char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}
	dest[k] = '\0';
	return (dest);
}
