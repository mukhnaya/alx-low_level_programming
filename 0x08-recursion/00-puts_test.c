#include "main.h"
/**
 * _puts_recursion - function to print string
 * @s: input string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	*s++;
	if (*s != '\0')
	{
		_puts_recursion(s);
	}
	else 
	{
		_putchar('\n');
	}
}
