#include <stdio.h>
/**
 * main - entry point
 * @argc: return number of entered arguments
 * @argv: return the supplied arguments
 *
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int pau;

	pau = 0;
	if (argc == 1)
	{
		printf("%d", pau);
		printf("\n");
	}
	else
	{
		pau = argc - 1;
		printf("%d", pau);
		printf("\n");
	}
	return (0);
}
