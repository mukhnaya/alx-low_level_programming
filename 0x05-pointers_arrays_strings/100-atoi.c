#include "main.h"
/**
 * _atoi - function
 * @s: string
 *
 * Return: integer
 *
 */
int _atoi(char *s)
{
	unsigned int ha, i, j, k, the_length, pau, l;
	int moseh;

	moseh = 1;
	ha = 0;
	pau = 0;
	while (*(s + ha) != '\0')
		ha++;
	for (i = 0; i < ha; i++)
	{
		if (*(s + i) <= '9' && *(s + i) >= '0')
			break;
	}
	for (j = i; j < ha; j++)
	{
		if (!(*(s + j) <= '9' && *(s + j) >= '0'))
			break;
	}
	for (k = 0; k < i; k++)
	{
		if (*(s + k) == '-')
			moseh = -moseh;
	}
	the_length = j - i;
	l = i;
	while (the_length >= 1)
	{
		pau = pau * 10 + (*(s + l) - '0');
		l++;
		the_length--;
	}
	return (pau * moseh);
}
