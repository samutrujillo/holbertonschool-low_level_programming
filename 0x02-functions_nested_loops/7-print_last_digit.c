#include "holberton.h"
/**
 * print_last_digit - Prints last digit.
 * Description: Prints last digit of number
 * @n: Number to check
 * Return: Last number.
 */
int print_last_digit(int n)
{
	int a, b;

	a = n % 10;
	if (a < 0)
		a = -a;
	b = a + '0';
	_putchar(b);
	return (a);
}
