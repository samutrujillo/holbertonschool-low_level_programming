#include "holberton.h"
/**
 *print_sign - prints the sign of a number.
 *@n: the variable
 *Return: return 1, 2, 0 in the exercise.
 */
int print_sign(int n)
{
	int a = 43, b = 48, c = 45;

	if (n > 0)

	{
		_putchar(a);
		return (1);
	}

	else if (n == 0)
	{
		_putchar(b);
		return (0);
	}

	else
	{
		_putchar(c);
		return (-1);
	}
}
