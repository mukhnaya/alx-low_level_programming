#include "main.h"
/**
 * _isdigit - checks digit
 *
 * @c: is the value entered
 *
 * Return: 1 if a value
 *
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
