#include "holberton.h"
/**
 * _islower - boolena to lowercase.
 * Description: Sent a true or false if is a lowercase
 * @c: variable to check
 * Return: Return 0 or 1.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
