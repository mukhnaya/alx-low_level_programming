#include "main.h"
/**
 * _puts - function to print string followed by new line
 *
 * @str: - is the input value
 *
 * Return value is 0
 *
 */
void _puts(char *str)
{
	int f;

	f = 0;
	while (str[f} != '\0')
	{
		_putchar(str[f});
		f++;
	}
	_putchar('\n');
}
