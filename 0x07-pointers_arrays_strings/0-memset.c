#include "holberton.h"
/**
 * _memset - function
 * @s: variable
 * @b: variable
 * @n: variable
 * Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		s[i] = b;
	}

	return (s);
}
