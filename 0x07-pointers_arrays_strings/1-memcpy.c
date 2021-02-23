#include "holberton.h"
/**
 * _memcpy - function
 * @dest: variable
 * @src: variable
 * @n: variable
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
