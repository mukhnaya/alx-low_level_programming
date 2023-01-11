#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - to create an array
 * @size: size of array
 * @c: is the string to insert
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int p;
	char *mos;

	mos = (char *) malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		if (mos == 0)
		{
			return (NULL);
		}
		else
		{
			for (p = 0; p < size; p++)
			{
				*(mos + p) = c;
			}
		}
	}
	return (mos);
}
