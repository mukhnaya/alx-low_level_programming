#include "main.h"
/**
 * factorial - function to return factorial
 * @n: is the number to return factorial
 *
 * Return: integer
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
