#include "holberton.h"
/**
 * _print_rev_recursion - Prints an inverse string
 * @s: String
 * Return: none
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
