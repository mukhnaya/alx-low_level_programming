#include<unistd.h>

/**
 * main - program that prints a sequence of words
 *
 * Return: 1 the program evaluates to one
 */

int main(void)
{

	write(2,
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
		59);
	return (1);
}
