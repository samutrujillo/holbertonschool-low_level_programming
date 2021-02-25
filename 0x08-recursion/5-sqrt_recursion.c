#include "holberton.h"
/**
 * solve_sqrt - prints buffer in hexa
 * _sqrt_recursion - prints buffer in hexa
 * @y: the address of memory to print
 * @n: the address of memory to print
 * Return: s.
 */
int solve_sqrt(int n, int y)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (y * y > n)
	{
		return (-1);
	}
	else if (y * y == n)
	{
		return (y);
	}
	else
	{
		return (solve_sqrt(n, y + 1));
	}
}
/**
 * _sqrt_recursion - prints buffer in hexa
 * @n: the address of memory to print
 * Return: s.
 */

int _sqrt_recursion(int n)
{
	return (solve_sqrt(n, 1));
}
