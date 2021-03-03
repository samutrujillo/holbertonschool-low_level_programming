#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - Create an array of chars
 * @size: Size array
 * @c: char
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (NULL);
	ar = malloc(sizeof(char) * size);
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}

	return (ar);
}
