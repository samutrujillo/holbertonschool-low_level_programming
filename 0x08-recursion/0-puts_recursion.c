#include "holberton.h"
/**
 * _puts_recursion - Prints a string
 * @s: String
 * Return: none
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
