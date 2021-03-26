#include "holberton.h"
/**
 * print_binary - converts a decimal number to binary
 * @n: variable
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int i;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (temp = n, i = 0; (temp >>= 1) > 0; i++)
		;
	for (; i >= 0; i--)
	{
		((n >> i) & 1) ? printf("1") : printf("0");
	}
}
