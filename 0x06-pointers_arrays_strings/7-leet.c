#include "holberton.h"
/**
 * leet - encodes into 1337
 * @s: string to modify.
 * Return: string encoded.
 */
char *leet(char *s)
{
	int i, j;
	char dict[] = "aeotl";
	char enco[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; dict[j] != '\0'; j++)
		{
			if (s[i] == dict[j] || s[i] == dict[j] - 32)
				s[i] = enco[j];
		}
	}

	return (s);
}
