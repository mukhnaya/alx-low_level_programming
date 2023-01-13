#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - initialize two dimensional array
 * @width: is the number of rows
 * @height: is the number of columns
 *
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **check;
	int pau;
	int mos;
	int jos;
	int jul;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	check = malloc(sizeof(int *) * height);

	if (check == NULL)
	{
		free(check);
		return (NULL);
	}
	for (pau = 0; pau < height; pau++)
	{
		check[pau] = malloc(sizeof(int) * width);
		if (check[pau] == NULL)
		{
			for (mos = pau; mos >= 0; mos--)
			{
				free(check[mos]);
			}
			free(check);
			return (NULL);
		}
	}
	for (jos = 0; jos < height; jos++)
	{
		for (jul = 0; jul < width; jul++)
		{
			check[jos][jul] = 0;
		}
	}
	return (check);
}
