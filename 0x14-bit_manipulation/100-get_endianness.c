#include "holberton.h"

/**
 * get_endianness - checks the endianness.
 * Return: 0
 */
int get_endianness(void)
{
	char *c = (char *)&x;

	if (*c)
		return (1);
	return (0);
}
