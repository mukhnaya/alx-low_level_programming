#include "main.h"
/**
 * is_prime_number - to return 1 or 0
 * @n: is the number to print prime numbers to
 *
 * Return: either 1 or 0
 *
 */
int is_prime_number(int n)
{
	int pau;

	pau = 2;
	if (n < 1)
	{
		return (0);
	}
	else if (n == 2 && n <= 3)
	{
		return (1);
	}
	else if ((n / 2) % pau == 0)
	{
		return (0);
	}
	else if ((n / 2) % pau != 0)
	{
		pau++;
		is_prime_number(n);
	}
	return (1);
}
