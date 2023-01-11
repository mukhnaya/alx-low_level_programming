#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - duplicate string and return pointer
 * @str: string to duplicate
 *
 * Return: pointer.
 */
char *_strdup(char *str)
{
	char *newstr;

	newstr = (char *) malloc(sizeof(*str));
	if (newstr == NULL)
	{
		return (NULL);
	}
	else
	{
		*newstr = *str;
		return (newstr);
	}
	free(newstr);
}
