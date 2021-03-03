#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - Concatenate two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, k, l;
	char *new_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (k = 0; s1[k]; k++)
	{}
	for (l = 0; s2[l]; l++)
	{}
	new_str = malloc(sizeof(char) * (k + l + 1));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; *s1; i++)
	{
		new_str[i] = *s1;
		s1++;
	}
	for (; *s2; i++)
	{
		new_str[i] = *s2;
		s2++;
	}
	new_str[i] = '\0';
	return (new_str);
}
