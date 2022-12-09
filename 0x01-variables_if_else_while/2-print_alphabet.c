#include <stdio.h>
/**
 * main - function for the program
 *
 * Return: 0 - Returns 0
 */

int main(void)
{
	char k;

	k = 'a';
	while (k <= 'z')
	{
		putchar(k);
		putchar('\n');
		k++;
	}
	return (0);
}
