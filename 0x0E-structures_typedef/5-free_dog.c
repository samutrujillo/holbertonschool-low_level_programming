
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - program that prints its name.
 * @d: array of character pointers
 * Return: dog_n.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
