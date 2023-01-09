#include <stdio.h>
/**
 * main: entry point
 * @argc: to return count of arguments
 * @argv: to return arguments supplied
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int pau;

	for (pau = 1; pau < argc; pau++)
	{
		printf("%s", argv[pau]);
		printf("\n");
	}
	return (0);
}
