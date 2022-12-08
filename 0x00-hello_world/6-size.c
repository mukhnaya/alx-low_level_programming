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

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(m));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(n));
	return (0);
}
