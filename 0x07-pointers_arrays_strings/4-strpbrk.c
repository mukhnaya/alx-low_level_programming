#include "main.h"
/**
 * _strpbrk - to search a string
 * @s: string to search from
 * @accept: string to search
 * Return: pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int pau;
	int mos;

	for (pau = 0; s[pau] != '\0'; pau++)
	{
		for (mos = 0; accept[mos]; mos++)
		{
			if (s[pau] == accept[mos])
			{
				return (s +pau);
			}
		}
	}
	return ('\0');
}
