#include "main.h"
/**
 * rev_string - function
 *
 * @s: input string
 *
 * Return: 0 value
 *
 */
void rev_string(char *s)
{
	char to_rever = s[0];
	int counts = 0;
	int k;

	while (s[counts] != '\0')
	{
		counts++;
	}
	for (k = 0; k < counts; k++)
	{
		counts--;
		to_rever = s[k];
		s[k] = s[counts];
		s[counts] = to_rever;
	}
}
