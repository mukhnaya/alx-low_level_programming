#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - to concatenate string
 * @s1: first string
 * @s2: second string
 * @n: the number of characters to copy
 *
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pau;
	int s1_length;
	int check_s1_length;
	int add_s1;
	int add_s2;
	int s1_length;
	int s2_length;
	int s3_length;

	if ( s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_length = 0;
	while (s1 !='\0')
	{
		s1_legngth++;
	}
	s2_length = 0;
	while (s2 != '\0')
	{
		s2_length++;
	}
	pau = (char *) malloc(n + s1_length * sizeof(char) + 1);
	if (pau == NULL)
	{
		return (NULL);
	}
	for (add_s1 = 0; add_s1 <= s1_length; add_s1++)
	{
		pau[add_s1] = s1[add_s1];
	}
	s3_length = 0;
	while (pau != '\0')
	{
		s3_length++;
	}
	int add_s2;
	for (add_s2 = 0; s2 < (s3_length); add_s2++)
	{
		pau[s3_length] = s2[add_s2];
		s3_length++;
	}
	return (pau);
}
