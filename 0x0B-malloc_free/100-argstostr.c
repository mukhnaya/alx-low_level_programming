#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenate arguments of a string
 * @ac: number of arguments supplied
 * @av: is the supplied arguments
 *
 * Return: pointer to the newstring
 */
char *argstostr(int ac, char **av)
{
	int pau;
	int mos;
	char *argConcat;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	argConcat = (char *) malloc(sizeof(
}
