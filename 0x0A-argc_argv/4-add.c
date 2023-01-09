#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc: counts arguments supplied
 * @argv: to return supplied arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum;
	int mos;
	int pau;

	pau = 0;
	sum = 0;
	if (argc <= 1)
	{
		printf("%d", pau);
		printf("\n");
	}
	else
	{
		if (argc > 1)
		{
			for (mos = 1; mos < argc; mos++)
			{
				if (!isdigit(argv[mos]))
				{
					printf("Error");
					printf("\n");
				}
				else
				{
					sum = sum + atoi(argv[mos]);
				}
			}
			printf("%d", sum);
			printf("\n");
		}
	}
	return (0);
}
