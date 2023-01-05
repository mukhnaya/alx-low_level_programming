#include "main.h"
/**
 * _puts_recursion - function to print string
 * @s: input string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	int pau;

	pau = 0;
	if (s[pau] != '\0')
	{
		_putchar(s[pau]);
		_puts_recursion(s);
		pau++;
	}
	_putchar('\n');
}
