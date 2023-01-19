#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - loops an array
 * @array: an array to loop
 * @size: size of array
 * @action:  is a pointer to the function you need to use
 * Return: void
 */
void array_iterator(int *array, unsigned int size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
	{
		return;
	}
	if (action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
