#include "main.h"
#include <stddef.h>
/**
 * _strchr - function to search a character in a string
 * @s: is string to search from
 * @c: is the character to search from
 * Return: Null if nothing and pointer to first occurence if found
 */
char *_strchr(char *s, char c)
{
	int e;

	e = 0;
	while (s[e] != '\0')
	{
		if (s[e] == c)
		{
			return (s + e);
		}
		e++;
	}
	return (NULL);
}
