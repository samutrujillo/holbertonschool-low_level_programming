#include "holberton.h"
/**
 * _isalpha - print from the a to the z
 * @c: Give me the number
 * Return: Always 0
 */
int _isalpha(int c)
{
	int n;
	int m;

	for (m = 'A'; m <= 'Z'; m++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			if (c >= m && c <= n)
			{
				return (1);
			}
		}
	}
	return (0);
}
