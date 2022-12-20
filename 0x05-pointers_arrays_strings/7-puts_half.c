#include "main.h"
/**
 * puts_half - to print half of a string
 *
 * @str: the nput string
 *
 * Return: 0 value
 *
 */
void puts_half(char *str)
{
	int f;
	int length;
	int n;

	f = 0;
	length = 0;
	while (str[f] != '\0')
	{
		length++;
		f++;
	}
	n = (length / 2);
	if ((length % 2) == 1)
	{
		n = ((length + 1) / 2);
	}
	f = n;
	while (str[f] != '\0')
	{
		_putchar(str[f]);
		f++;
	}
}
