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
	int f;
	int k;
	char mo;
	int i;
	int j;
	int no;

	k = 0;
	mo = s1[0];
	f = 1;
	while (mo != '\0')
	{
		k++;
		mo = s1[f++];
	}
	i = 0;
	no = s2[0];
	j = 1;
	while (no != '\0')
	{
		i++;
		no = s2[j++];
	}
	return (k - i);
}
