#include "main.h"
/**
 * _pow_recursion - to return x to power y
 * @x: is the number
 * @y: is the power to x
 *
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1 / _pow_recursion(x, -y));
	}
}
