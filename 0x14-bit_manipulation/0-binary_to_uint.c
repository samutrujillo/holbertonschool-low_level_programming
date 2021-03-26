#include "holberton.h"
/**
 * _strlen - calculates the length of the string
 * @s: variable
 * Return: length
 */
unsigned int _strlen(const char *s)
{
	unsigned int length;

	for (length = 0; *(s + length); length++)
		;
	return (length);
}
/**
 * binary_to_uint - function that converts a binary number
 * @b: variable
 * Return: j
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j, k;

	if (!b)
		return (0);
	i = _strlen(b) - 1;
	for (j = 0, k = 1; i >= 0; i--, k *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			j += k;
	}
	return (j);
}
