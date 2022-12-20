#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - creates a password of sum 2772
 *
 * Return:0;
 *
 */
int main(void)
{
	int start_here, mimi, checking;

	srand(time(NULL));
	checking = 2772;
	start_here = 0;
	while (start_here < (checking - 122))
	{
		mimi = (rand() % (122 - 97 + 1)) + 97;
		printf("%c", mimi);
		start_here = start_here + mimi;
	}
	mimi = checking - start_here;
	printf("%c", mimi);
	return (0);
}
