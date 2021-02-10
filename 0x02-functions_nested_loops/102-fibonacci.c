#include <stdio.h>
#include "holberton.h"
/**
 * main - prints fibonacci numbers
 * Description: Prints 50 first fibonacci numbers
 * Return: 0
 */
int main(void)
{
	long a, b, c, d;

	a = 0;
	b = 1;
	for (d = 0; d < 50; d++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu", c);
		if (d == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}
