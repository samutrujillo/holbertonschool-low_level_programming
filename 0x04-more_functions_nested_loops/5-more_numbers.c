#include "holberton.h"
/**
 * more_numbers - function
 * Return: 0 on success.
 */
void more_numbers(void)
{
	int i = 0;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{

			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}

		_putchar('\n');
	}
}
