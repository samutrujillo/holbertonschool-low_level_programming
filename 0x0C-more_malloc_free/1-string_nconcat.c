#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - measure string length.
 * @s: value to size.
 * Return: string length.
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *(s + count) != 0; count++)
	{}
	return (count);
}
/**
 * validate_one - concatenate strings.
 * @s1: string one
 * @s2: string two
 * @new_str: string to place string one and two
¨* @n: limit of string two
 * Return: concatened string.
 */
char *validate_one(char *s1, char *s2, char *new_str, unsigned int n)
{
	unsigned int i, j;

	for (i = 0; *s1; i++)
	{
		new_str[i] = *s1;
		s1++;
	}

	for (j = 0; s2[j] != '\0' && j < n; j++, i++)
		new_str[i] = s2[j];

	new_str[i] = '\0';

	return (new_str);
}
/**
 * string_nconcat - Concatenates two strings.
 * @s1: string one
 * @s2: string two
 * @n: limit to s2
 * Return: pointer to allocated memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len_s1;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len_s1 = _strlen(s1);

	new_str = malloc(len_s1 + (n * sizeof(*s2) + 1) * sizeof(*new_str));
	if (new_str == NULL)
	{
		free(new_str);
		return (NULL);
	}

	new_str = validate_one(s1, s2, new_str, n);

	return (new_str);
}
