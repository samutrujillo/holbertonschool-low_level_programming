#include "holberton.h"
/**
 * print_most_numbers - function
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		if (i == '2' || i == '4')
		{
			continue;
		}
		_putchar (i);
	}
	_putchar ('\n');
}
