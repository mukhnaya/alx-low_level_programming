#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int wewe;
	char mimi;

	wewe = 0;
	while (wewe <= 9)
	{
		mimi = 'a';
		while (mimi <= 'z')
		{
			_putchar(mimi);
			mimi++;
		}
		_putchar('\n');
		wewe++;
	}
}
