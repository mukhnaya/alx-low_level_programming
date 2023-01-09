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
	f = 1;
	while (mo != '\0')
	{
		k++;
		mo = s[f++];
	}
	return (k);
}
