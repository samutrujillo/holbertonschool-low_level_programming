#include "holberton.h"
/**
 * rot13 - encodes into rot13
 * @s: string to modify.
 * Return: string encoded.
 */
char *rot13(char *s)
{
	int i, j;
	char dict[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char enco[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; dict[j] != '\0'; j++)
		{
			if (s[i] == dict[j])
			{
				s[i] = enco[j];
				break;
			}
		}
	}

	return (s);
}
