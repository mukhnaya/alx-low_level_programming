#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * malloc_checked
 * @b: is the size of memory
 *
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	int *p = (int *) malloc(b * sizeof(int));

	if (p == NULL)
	{
		exit(98);
	}
}
