#include "main.h"
/**
 * set_string - function to set value of a pointer to a char
 * @s: to set
 * @to: to be replaced
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
