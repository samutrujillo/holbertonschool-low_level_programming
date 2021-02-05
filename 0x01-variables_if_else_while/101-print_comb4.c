#include <stdio.h>
/**
 * main - Prints 3 numbers
 * Description: For loop that prints the numbers from 001 to 998 without repeat
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = '0'; a <= '7'; a++)
	{
		for (b = a + 1; b <= '8'; b++)
		{
			for (c = b + 1; c <= '9'; c++)
			{
				if (a != b && a != b &&
				    b != c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != '7' || b != '8' ||
					    c != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
