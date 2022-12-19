#include "main.h"
/**
 * _strlen - to check string lenght
 *
 * @s: is character input
 *
 * Return: 0 Value
 *
 */
int _strlen(char *s)
{
	int f;
	int k;
	char mo;

	k = 0;
	mo = s[0];
	for (f = 1; f != '\0'; mo = s[f++])
	{
		k++;
	}
	return (k);
}
