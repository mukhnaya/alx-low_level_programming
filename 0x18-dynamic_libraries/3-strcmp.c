#include "main.h"
/**
 * _strcmp - compare strings
 *
 * @s1: is 1st string
 * @s2: 2nd string
 *
 * Return: 0 Value
 *
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
