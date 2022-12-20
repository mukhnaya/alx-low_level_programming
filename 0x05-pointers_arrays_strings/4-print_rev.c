#include "main.h"
/**
 * print_rev - print in reverse order
 *
 * @s: is the input string
 *
 * Return: zero
 *
 */
void print_rev(char *s)
{
	int counts;
	int f;
	int g;

	counts = 0;
	f = 0;
	while (s[f] != '\0')
	{
		counts++;
		f++;
	}
	g = (counts - 1);
	while (g >= 0)
	{
		_putchar(s[g]);
		g--;
	}
	_putchar('\n');
}
