#include<stdio.h>

/**
 *main - Entry block into the program
 *
 *Return: 0 because the function is not evluating anything
 */
int main(void)
{
	char c;
	int i;
	long int k;
	long long int m;
	float n;

	printf("Size of a char: %lu %s\n", (unsigned long)sizeof(c), "bytes(s)");
	printf("Size of an int: %lu %s\n", (unsigned long)sizeof(i), "byte(s)");
	printf("Size of a long int: %lu %s\n", (unsigned long)sizeof(k), "byte(s)");
	printf("Size of a long long int: %lu %s\n", (unsigned long)sizeof(m), "byte(s)");
	printf("Size of a float: %lu %s", (unsigned long)sizeof(n), "byte(s)");
	return (0);
}
