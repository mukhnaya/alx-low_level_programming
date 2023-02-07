#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_binary - converts number to binary
 * @n: integer to convert
 * Return: zero
 */
void print_binary(unsigned long int n)
{
	unsigned long int pau;
	unsigned int mos = sizeof(n) * 8;
	unsigned int val;
	unsigned int flag = 1;

	val = 0;
	while (val < mos)
	{
		pau = (n << 1);
		pau >>= 1;
		if (n != pau)
		{
			flag = 0;
			write(1, "1", 1);
		}
		else if (!flag)
		{
			write(1, "0", 1);
		}
		n <<=  1;
		val++;
	}
	if (flag == 1)
	{
		write(1, "0", 1);
	}
}
