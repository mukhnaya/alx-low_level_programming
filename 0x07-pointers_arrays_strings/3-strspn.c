#include "main.h"
/**
 * _strspn - function to search a string
 * @s: string to search from
 * @accept: string to search
 * Return: the length of string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int pau;
	unsigned int mose;
	unsigned int length;
	unsigned int p;

	length = 0;
	for (pau = 0; accept[pau] != '\0'; pau++)
	{
		p = 0;
		for (mose = 0; s[mose] != '\0'; mose++)
		{
			if (accept[pau] == s[mose])
			{
				length++;
				p = 1;
			}
		}
		if (p == 0)
		{
			return (length);
		}
	}
	return (length);
}
