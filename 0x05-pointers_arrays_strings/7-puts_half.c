#include "holberton.h"
/**
 * puts_half - function
 *@str: variable
 *
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	i = i + 1;
	for (i = i / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
