#include <stdio.h>
/**
 * main - prints fibonacci numbers
 * Description: Prints 50 first fibonacci numbers
 * Return: 0
 */
int main(void)
{
	long a = 0;
	long b = 1;
	long c;
	long d;
	long e = 0;

	for (d = 0; d < 50; d++)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0 && c < 4000000)
			e += c;
	}
	printf("%lu\n", e);
	return (0);
}
