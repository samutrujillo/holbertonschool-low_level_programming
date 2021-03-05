#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - Create an array of integers.
 * @min: starting value
 * @max: end value
 * Return: Pointer to new array.
 */
int *array_range(int min, int max)
{
	int i;
	int *new_int;

	if (min > max)
		return (NULL);

	new_int = malloc(sizeof(int) * (max - min + 1));
	if (new_int == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		new_int[i] = min;
		min++;
	}

	return (new_int);
}
