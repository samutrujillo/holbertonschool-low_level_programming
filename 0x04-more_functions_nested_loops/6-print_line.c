#include "holberton.h"
/**
 * print_line - function
 *@n: variable
 * Return: 0
 */
void print_line(int n)
{

	int j;


	if (n <= 0)
	{
		_putchar('\n');
		return;
	}


	for (j = 0; j < n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
