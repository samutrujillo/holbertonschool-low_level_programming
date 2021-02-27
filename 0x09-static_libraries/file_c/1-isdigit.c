#include "holberton.h"
/**
 * _isdigit - prints the string "Holberton" from a character array.
 *@c: this is the variable
 * Return: 0 on success.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
