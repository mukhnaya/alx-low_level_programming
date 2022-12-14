#include "main.h"
/**
 * print_alphabet - entry point
 */

void print_alphabet(void)
{
	char mose;

	mose = 'a';
	while (mose <= 'z')
	{
		_putchar(mose);
		mose++;
	}
	_putchar('\n');
}
