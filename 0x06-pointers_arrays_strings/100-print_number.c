#include "holberton.h"
/**
 * print_number - Prints integer
 * @n: Integer to print.
 * Return: none.
 */
void print_number(int n)
{
	unsigned int a = n;

	if (n < 0)
	{
		_putchar('-');
		a *= -1;
	}

	if ((a / 10) > 0)
		print_number(a / 10);
	_putchar((a % 10) + '0');
}
