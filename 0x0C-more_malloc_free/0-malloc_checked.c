#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory.
 * @b: size to allocate
 * Return: pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *new_memory;

	new_memory = malloc(b);
	if (new_memory == NULL)
	{
		exit(98);
	}

	return (new_memory);
}
