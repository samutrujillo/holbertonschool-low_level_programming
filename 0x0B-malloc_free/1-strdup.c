#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - check the code for Holberton School students.
 * @str: this is the first accountant.
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *arr = NULL;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	arr = malloc(sizeof(char) * i + 1);
	if (arr == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		arr[j] = str[j];
	}
	arr[j] = '\0';
	return (arr);
}
