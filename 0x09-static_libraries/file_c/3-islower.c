#include "holberton.h"
/**
 * _islower - Entry point
 *
 *@c: print the value
 *
 *Return: Returns 0 upon successful run.
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	return (0);
}
