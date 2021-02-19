#include "holberton.h"
/**
 * _strncat - function concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: bytes size
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{}
	for (j = 0 ; j < n && src[j] != '\0' ; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';

	return (dest);
}
