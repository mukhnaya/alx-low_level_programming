#include "main.h"
/**
 * _isupper - to check upper case letters
 *
 * @c: is the input variable
 *
 * Return: 1 if uppercase
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
