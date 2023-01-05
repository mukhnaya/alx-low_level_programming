#include "main.h"
/**
 * _strlen_recursion - function to count string characters
 * @s: is the string to count its characters
 *
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
