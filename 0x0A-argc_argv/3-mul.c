#include <stdio.h>
#include <stdlib.h>
/**
 * main - is the entry point
 * @argc: is the number count
 * @argv: returns supplied strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mult;

	if (argc <= 2)
	{
		printf("Error");
		printf("\n");
		return (1);
	}
	else
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d", mult);
		printf("\n");
	}
	return (0);
}
