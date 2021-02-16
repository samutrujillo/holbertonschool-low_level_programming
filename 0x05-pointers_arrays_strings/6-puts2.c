#include "holberton.h"
/**
 * puts2 - function
 *@str: variable
 *
 */
void puts2(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
		c++;
	}
	_putchar(10);
}
