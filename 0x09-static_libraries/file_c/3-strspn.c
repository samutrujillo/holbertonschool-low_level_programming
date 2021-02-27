#include "holberton.h"
/**
 * _strspn - prints buffer in hexa
 * @s: the address of memory to print
 * @accept: the size of the memory to print
 * Return: s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a;
	int j, i;

	a = 0;

	for (i = 0; s[i] != '\0' && s[i] != ' '; i++)
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				a++;
			}
		}
	}
	return (a);
}
