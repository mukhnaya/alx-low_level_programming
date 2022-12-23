#include "main.h"
/**
 * infinite_add - function to add tow numbers
 * @n1: string with first number to add
 * @n2: string with second number to add
 * @r: to store the addition result
 * @r_index: the current index to the result
 *
 * Return: result after addition
 *
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num, tens = 0;
	
	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		um = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n1; n1--, r_index--)
	{
		num = (*n1 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n2; n2--, r_index--)
	{
		num = (*n2 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	if (tens && r_index >= 0)
	{
		*(r + r_index) = (tens % 10) + '0';
		return (r + r_index);
	}
	else if (tens && r_index < 0)
	{
		return (0);
	}
	return (r + r_index + 1);
}

