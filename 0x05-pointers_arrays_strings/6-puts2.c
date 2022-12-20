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

	for (k = 0; str[k] != '\0'; k++)
	{
		if ((k % 2) == 0)
			_putchar(str[k]);
		else
			continue;
	}
	_putchar('\n');
}
