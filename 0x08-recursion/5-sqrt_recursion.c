#include "main.h"
/**
 * _sqrt_recursion - function to find square root
 * @n: is the number finds square root
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	int pau;

	pau = 0;
	if (pau * pau == n)
	{
		return (pau);
	}
	pau++;
	_sqrt_recursion(n - pau);
	return (pau);
}
