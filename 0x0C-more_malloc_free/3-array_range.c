#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - to return range
 * @min: first number
 * @max: last number
 *
 * Return: 0
 */
int *array_range(int min, int max)
{
	int array_size;
	int use_get_range;
	int *int_range;

	array_size = (max - min) + 1;
	if (min > max)
	{
		return (NULL);
	}
	int_range = malloc(sizeof(int) * array_size);
	if (int_range == NULL)
	{
		return (NULL);
	}
	use_get_range = 0;
	while (use_get_range <= max)
	{
		int_range[use_get_range] = min++;
		use_get_range++;
	}
	return (int_range);
}
