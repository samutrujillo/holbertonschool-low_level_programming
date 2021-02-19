#include "holberton.h"
/**
 * cap_string - Capitalize words
 * @s: string to modify.
 * Return: string.
 */
char *cap_string(char *s)
{
	int i, j;
	char mark[14] = {9, ' ', '\n', ',', ';', '.', '!', '?', '"', '(', ')',
			 '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			for (j = 0; mark[j] != '\0'; j++)
			{
				if (i == 0)
				{
					s[i] -= 32;
					break;
				}
				else if (s[i - 1] == mark[j])
					s[i] -= 32;
			}
	}
	return (s);
}
