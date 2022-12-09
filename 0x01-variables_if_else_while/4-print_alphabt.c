#include <stdio.h>
/**
 * main - function entry point
 *
 * Return: 0 - returns nothing
 *
 */

int main(void)
{
	char k;

	k = 'a';
	while (k <= 'z')
	{
		if (k != 'e' || k != 'q')
		{
			putchar(k);
		}
	}
	putchar('\n');
	return (0);
}
