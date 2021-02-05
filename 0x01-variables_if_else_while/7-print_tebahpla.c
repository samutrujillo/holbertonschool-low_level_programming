#include <stdio.h>
/**
 *main - print the lowercase alphabet
 *
 *Return: (0) Always
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
