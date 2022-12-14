#include "main.h"
/**
 * main - entry point
 *
 * Return: 0 - returns no value
 */

int main(void)
{
	char k[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int n;

	n = 0;
	while (n <= 7)
	{
		_putchar(k[n]);
		n++;
	}
	_putchar('\n');
	return (0);
}
