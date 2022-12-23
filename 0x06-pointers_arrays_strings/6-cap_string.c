#include "main.h"
/**
 * cap_string - to capitalize first letters in a string
 *
 * @pau: is the string input
 *
 * Return: void
 */
char *cap_string(char *pau)
{
	int x = 0;

	while (pau[x])
	{
		while (!(pau[x] >= 'a' && pau[x] <= 'z'))
		{
			x++;
		}
		if (pau[x - 1] == ' ' ||
		    pau[x - 1] == '\t' ||
		    pau[x - 1] == '\n' ||
		    pau[x - 1] == ',' ||
		    pau[x - 1] == ';' ||
		    pau[x - 1] == '.' ||
		    pau[x - 1] == '!' ||
		    pau[x - 1] == '?' ||
		    pau[x - 1] == '"' ||
		    pau[x - 1] == '(' ||
		    pau[x - 1] == ')' ||
		    pau[x - 1] == '{' ||
		    pau[x - 1] == '}' ||
		    x == 0)
			pau[x] -= 32;
		x++;
	}
	return (pau);
}
