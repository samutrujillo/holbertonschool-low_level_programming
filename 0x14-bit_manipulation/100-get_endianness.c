#include "holberton.h"

/**
 * get_endianness - checks the endianness.
 * Return: 0
 */
int get_endianness(void)
{
	int i = 1;
	char *j = (char *)&i;

	if (*j)
		return (1);
	return (0);
}
