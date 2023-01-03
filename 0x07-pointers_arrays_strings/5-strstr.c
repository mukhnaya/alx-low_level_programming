#include "main.h"
/**
 * _strstr - locate and print string
 * @haystack: string to locate from
 * @needle: string to locate
 * Return: pointer to s or null
 */
char *_strstr(char *haystack, char *needle)
{
	int pau;
	int mose;

	pau = 0;
	while (haystack[pau] != '\0')
	{
		mose = 0;
		while (needle[mose] != '\0')
		{
			if (haystack[pau] == needle[mose])
			{
				return (haystack + 1);
			}
			mose++;
		}
		pau++;
	}
	return ('\0');
}
