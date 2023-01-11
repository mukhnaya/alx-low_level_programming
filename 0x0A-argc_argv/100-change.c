#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - entry point
 * @argc: to count arguments supplied
 * @argv: to return supplied arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int pau;
	int mos;

	mos = 0;
	if (argc == 1)
	{
		printf("Error");
		printf("\n");
		return (1);
	}
	if (argc > 1)
	{
		for (pau = 0; pau < argc; pau++)
		{
			if (atoi(argv[pau] < 0))
			{
				printf("%d", mos);
				printf("\n");
			}
		}
	}
}
