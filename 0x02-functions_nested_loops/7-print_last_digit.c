#include "main.h"
/**
 * print_last_digit - prints last digit
 *
 * @number: is the last digit
 *
 * Return: last value
 */
int print_last_digit(int number)
{
	int mwisho;

	mwisho = number % 10;
	if (mwisho < 0)
	{
		mwisho *= -1;
	}
	_putchar(mwisho + '0');
	return (mwisho);
}
