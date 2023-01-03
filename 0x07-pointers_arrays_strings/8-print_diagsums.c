#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - print sum of a diagnols in a matri
 * @a: is the name of array
 * @size: is the size of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int mos;
	int pau;
	int lyn;
	int mum;

	/* lyn is the sum of main diagnoa */
	lyn = 0;
	/* mum is the sum of minor diagnol */
	mum = 0;
	for (pau = 0; pau <= size; pau++)
	{
		for (mos = 0; mos <= size; mos++)
		{
			lyn = lyn + a[pau];
			printf("sum of main diagnol is %d: ", lyn);
			mum = mum + a[mos];
			printf("sum of minor diagnol is %d", mum);
		}
	}
}
