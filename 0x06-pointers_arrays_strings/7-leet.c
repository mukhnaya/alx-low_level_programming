#include "main.h"
/**
 * leet - function for encoding
 *
 * @pau: is the input
 *
 * Return: pointer
 *
 */
char *leet(char *pau)
{
	int x = 0;
	int y;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (pau[x])
	{
		for (y = 0; y <= 7; y++)
		{
			if (pau[x] == leet[y] ||
			    pau[x] - 32 == leet[y])
				pau[x] = y + '0';
		}
		x++;
	}
	return (pau);
}
