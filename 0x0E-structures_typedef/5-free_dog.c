#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function
 * @d: is the struct
 *
 * Return: NULL
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}