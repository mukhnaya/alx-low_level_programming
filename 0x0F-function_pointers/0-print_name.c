#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function print name
 * @name: name to print
 * @f: pointer function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
