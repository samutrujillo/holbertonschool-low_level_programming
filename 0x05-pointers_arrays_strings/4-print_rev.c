#include "holberton.h"
/**
 * print_rev - function
 * @s: variable
 * Return: gave i
 */
void print_rev(char *s)
{
	int c, r;

	for (c = 0; s[c] != '\0'; c++)
		;
	for (r = c - 1; r >= 0; r--)
	{
		_putchar(s[r]);
	}
	_putchar('\n');
}
