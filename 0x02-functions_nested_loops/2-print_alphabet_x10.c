#include "holberton.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times.
 * Description: Prints alphabeth trough a function
 * Return: Alphabet.
 */
void print_alphabet_x10(void)
{
	char r, a;

	for (r = 1; r <= 10; r++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
	_putchar('\n');
	}
}
