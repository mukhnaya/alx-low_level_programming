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
		k++;
	}
	putchar('\n');
	return (0);
}
