#include "main.h"
/**
 * puts2 - prints after every character
 *
 * @str: - is the string
 *
 * Return: 0
 *
 */
void puts2(char *str)
{
	int k;

	k = 0;
	while (str[k] != '\0')
	{
		if ((k % 2) == 0)
		{
			_putchar(str[k]);
		}
		else
		{
			continue;
		}
		k++;
	}
	_putchar('\n');
}
