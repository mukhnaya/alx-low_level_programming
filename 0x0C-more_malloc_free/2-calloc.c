#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * _calloc - malloc work as calloc
 * @nmemb: elements of array
 * @size: of array
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pau;
	unsigned int mos;
	unsigned int jos;

	mos = nmemb * size;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pau = malloc(mos);
	if (pau == NULL)
	{
		return (NULL);
	}
	jos = 0;
	while (jos < mos)
	{
		*(pau + jos) = 0;
		jos++;
	}
	return (pau);
}
