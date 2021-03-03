#include <stdlib.h>
#include "holberton.h"
/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: bytes size
 * @str_len: string length
 * Return: next index to check of source string
 */
int _strncat(char *dest, char *src, int n, int str_len)
{
	int j;

	for (j = 0; src[n] != ' ' && n < str_len; n++, j++)
		dest[j] = src[n];
	return (n);
}
/**
 * set_memory - Allocates memory
 * @str1: new string
 * @str2: inserted string
 * @str_len: string length
 * Return: void
 */
void set_memory(char **str1, char *str2, int str_len)
{
	int i = 0, j = 0, word_len = 1;

	while (i < str_len)
	{
		if (str2[i] != ' ')
		{
			while (str2[i] != ' ' && i < str_len)
				i++, word_len++;
			str1[j] = malloc(sizeof(char) * word_len);
			str1[j][word_len] = '\0';
			j++, word_len = 1;
		}
		i++;
	}
}
/**
 * count_words - Counts words
 * @str: inserted string
 * @str_len: string length
 * Return: words
 */
int count_words(char *str, int str_len)
{
	int i = 0, words = 0;

	while (i < str_len)
	{
		if (str[i] != ' ')
		{
			while (str[i] != ' ' && i < str_len)
				i++;
			words++;
		}
		i++;
	}
	if (words == 0)
		return (0);
	return (words);
}
/**
 * strtow - Transform string to words
 * @str: String
 * Return: pointer to string
 */
char **strtow(char *str)
{
	int i = 0, j = 0, str_len = 0, words;
	char **newstr;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	while (*(str + str_len) != '\0')
		str_len++;
	words = count_words(str, str_len);
	if (!words)
		return (NULL);
	newstr = malloc((words + 1) * sizeof(char *));
	set_memory(newstr, str, str_len);
	while (i < str_len)
	{
		if (str[i] != ' ')
		{
			i = _strncat(newstr[j], str, i, str_len);
			j++, i--;
		}
		i++;
	}
	newstr[words + 1] = NULL;
	return (newstr);
}
