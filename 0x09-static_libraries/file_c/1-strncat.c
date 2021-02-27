#include "holberton.h"
/**
 * *_strncat - check the code for Holberton School students.
 * @dest: this is the first accountant.
 * @src: this is the second accountant.
 * @n: this is the third  accountant.
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int c;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
	}

	for (c = 0; c < n && src[c] != '\0'; c++)
	{
		dest[i + c] = src[c];
	}
	return (dest);
}
