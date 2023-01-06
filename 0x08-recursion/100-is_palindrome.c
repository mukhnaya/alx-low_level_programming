#include "main.h"
/**
 * is_palindrome - function to check palindrome strings
 *
 * @s: is the string to check
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int pau;

	pau = 0;
	if (*s == '\0')
	{
		if (*s == s[pau])
			return (1);
		return (0);
	}
	return (0);
}
