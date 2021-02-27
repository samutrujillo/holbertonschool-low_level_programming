#include "holberton.h"
/**
 * _strcmp - check the code for Holberton School students.
 * @s1: this is the first accountant.
 * @s2: this is the second accountant.
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int aux;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			aux = 0;
		}
		else
		{
			aux = s1[i] - s2[i];
			break;
		}
	}
	return (aux);
}
