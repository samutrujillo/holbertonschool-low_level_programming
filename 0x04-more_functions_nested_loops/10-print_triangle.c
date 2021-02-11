#include "holberton.h"

/**
 * print_triangle - function
 *@n: variable
 * Return: 0.
 */
void print_triangle(int n)
{
	int a;
	int b;
	int subs;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= n; b++)
			{
				subs = n - a;
				if (b <= subs)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
