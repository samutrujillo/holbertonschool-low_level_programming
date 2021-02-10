#include <stdio.h>
#include "holberton.h"
/**
 * main - prints multiples
 * Description: Sum multiples
 * Return: 0
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 1024; a++)
		if (a % 3 == 0 || a % 5 == 0)
			b += a;
	printf("%d\n", b);
	return (0);
}
