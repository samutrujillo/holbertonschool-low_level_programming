#include <stdio.h>
/**
 * main - Prints 2 numbers convinations
 * Description: For loop that prints the numbers from 00 00 to 98 99
 * Return: 0
 */
int main(void)
{
int a;
int b;
int c;
int d;

for (a = '0'; a <= '9'; a++)
	for (b = '0'; b <= '9'; b++)
		for (c = '0'; c <= '9'; c++)
			for (d = '0'; d <= '9'; d++)
			{
				if (a < c || (a == c && b < d))
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a != '9' || b != '8' || c != '9'
					      || d != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
putchar('\n');
return (0);
}
