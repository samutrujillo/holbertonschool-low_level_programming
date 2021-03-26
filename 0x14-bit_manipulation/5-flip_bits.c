#include "holberton.h"
/**
 * flip_bits - function that returns the number of bits
 * @n: var
 * @m: var
 * Return: j
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;

	i = sizeof(n) * 8 - 1;
	while (i >= 0)
	{
		i--;
		if (((n ^ m) >> i) & 1)
			j++;
	}
	return (j);
}
