#include "main.h"
/**
 * _print_rev_recursion - to reverse string characters
 * @s: is the string to reverse
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int pau;
	int length;
	int k;

	length = 0;
	k = 0;
	while (s[k] != '\0')
	{
		length++;
	}
	pau = length;
	if (s[pau] == '\0')
	{
		_putchar(s[pau]);
		pau--;
		_print_rev_recursion(s);
	}
	_putchar('\n');
}
