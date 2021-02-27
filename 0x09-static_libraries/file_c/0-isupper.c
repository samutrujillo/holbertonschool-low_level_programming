#include "holberton.h"
/**
 * _isupper - prints the string "Holberton" from a character array.
 *@c: this is the variable
 * Return: 0 on success.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
