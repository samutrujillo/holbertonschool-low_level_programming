#include "holberton.h"
/**
 * set_bit - function that sets the value of a bit to 1
 * @n: variable
 * @index: index
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8 - 1)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
