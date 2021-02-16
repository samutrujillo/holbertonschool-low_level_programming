#include "holberton.h"
/**
 * _strcpy - funtion
 *@src: variable
 *@dest:variable
 *Return: the variable finished
 */
char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c]; c++)
	{
		dest[c] = src[c];
	}
	dest[c] = src[c];
	return (dest);
}
