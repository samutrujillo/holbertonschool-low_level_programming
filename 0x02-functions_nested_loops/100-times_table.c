#include "holberton.h"
/**
 * print_times_table - Prints table.
 * Description: Prints a table with n dimentions
 * @n: dimention to print
 * Return: none.
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;
				if (c < 10 && b != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((c % 10) + '0');
				}
				else if (c >= 10 && c < 100)
				{
					_putchar(' ');
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				}
				else if (c >= 100)
				{
					_putchar((c / 100) + '0');
					_putchar((c / 10) % 10 + '0');
					_putchar((c % 10) + '0');
				}
				else
				{
					_putchar((c % 10) + '0');
				}
				if (b != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
