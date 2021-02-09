#include "holberton.h"
/**
 * _isalpha - boolena to lowercase or uppercase.
 * Description: Sent a true or false if is a lowercase
 * @c: variable to check
 * Return: Return 0 or 1.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
