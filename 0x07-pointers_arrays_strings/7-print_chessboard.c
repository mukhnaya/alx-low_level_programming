#include "main.h"
/**
 * print_chessboard - function to print chessboard
 * @a: is the character to enter
 * Return: chessboard
 */
void print_chessboard(char (*a)[8])
{
	int pau;
	int mose;

	for (pau = 0; pau < **a; pau++)
	{
		for (mose = 0; mose < 8; mose++)
		{
			a[pau][0] = 'r';
		}
	}
}
