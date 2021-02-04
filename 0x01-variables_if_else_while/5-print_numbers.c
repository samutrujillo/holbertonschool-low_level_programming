#include <stdio.h>
/**
 *main - my program
 *
 *Return: 0
 */
int main(void)
{
	int a;

	a = 0;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	putchar('\n');
	return (0);
}
