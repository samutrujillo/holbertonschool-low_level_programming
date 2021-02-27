#include <stdio.h>
#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to a char
 * @needle: pointer to a char
 * Return: haystack
 **/

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		if (*haystack != *needle)
			haystack++;
		else
		{
			for (i = 0; needle[i] != '\0'; i++)
			{
				if (needle[i] != haystack[i])
				{
					haystack++;
					break;
				}
				else
					continue;
			}
			if (needle[i] == '\0')
				return (haystack);
		}
	}
	if (*haystack == '\0')
		return (NULL);
	else
		return (haystack);
}
