#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - duplicate string and return pointer
 * @str: string to duplicate
 *
 * Return: pointer.
 */
char *_strdup(char *str)
{
	char *newstr;

	if (str == NULL)
	{
		return (NULL);
	}
	newstr = (char *) malloc(sizeof(char) * strlen(str) + 1);
	if (newstr == NULL)
	{
		return (NULL);
	}
	else
	{
		strcpy(newstr, str);
		return (newstr);
	}
	free(newstr);
}
