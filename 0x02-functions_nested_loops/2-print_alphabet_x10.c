#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int wewe;
	char mimi;

	wewe = 0;
	mimi = 'a';
	while (wewe <= 9)
	{
		while (mimi <= 'z')
		{
			_putchar(mimi);
			mimi++;
		}
		wewe++;
	}
}
