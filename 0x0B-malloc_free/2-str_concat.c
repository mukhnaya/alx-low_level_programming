#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - to concatenate strings
 * @s1: is first string
 * @s2: is second string
 *
 * Return: pointer to new allocated memory
 */
char *str_concat(char *s1, char *s2)
{
	char *s1_s2;

	s1_s2 = (char *) malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
	if (s1_s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		s1_s2 = strcat(s1, s2);
	}
	return (s1_s2);
}
