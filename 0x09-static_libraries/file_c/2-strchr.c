#include "holberton.h"
#include <stdio.h>
/**
 * *_strchr - prints buffer in hexa
 * @s: the address of memory to print
 * @c: the size of the memory to print
 * Return: s.
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
		{
			return (s + 1);
		}
		s++;
	}
	return (s + 1);
}
