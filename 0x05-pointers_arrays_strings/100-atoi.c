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
	int x;
	int y;
	int z;

	y = 0;
	x = 0;
	for (z = 0; s[z] != '\0'; z++)
	{
		if (s[z] == '-')
		{
			x++;
		}
		if (s[z] > 47 && s[z] < 58)
		{
			while (s[z] > 47 && s[z] < 58)
			{
				y = y * 10 - (s[z++] - 48);
				break;
			}
		}
	}
	return (z *= x % 2 == 0 ? -1 : 1);
}
