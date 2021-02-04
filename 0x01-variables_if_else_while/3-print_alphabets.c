#include <stdio.h>
/**
 *main - mi program
 *
 *Return: Always 0
 */
int main(void)
{
	char min;
	char MAYUS;

	for (min = 'a'; min <= 'z'; min++)
		putchar(min);

	for (MAYUS = 'A'; MAYUS <= 'Z'; MAYUS++)
		putchar(MAYUS);
	putchar('\n');
	return (0);
}
