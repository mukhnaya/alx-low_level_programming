#include "main.h"
/**
 * string_toupper - convert string to upper
 *
 * @stri: input to convert
 *
 * Return: zero
 *
 */
char *string_toupper(char *stri)
{
	int x = 0;

	while (stri[x])
	{
		if (stri[x] >= 'a' && stri[x] <= 'z')
		{
			stri[x] -= 32;
		}
		x++;
	}
	return (stri);
}
