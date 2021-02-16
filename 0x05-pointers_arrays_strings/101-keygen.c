#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Generates a random password
 * Description: Generate a random password
 * to crack a file
 * Return: zero if ok.
 */
int main(void)
{
	int random, length = 0;

	srand(time(0));
	while (length < 2772 - 127)
	{
	        random = rand() % 127;
		if (random > 32)
		{
			putchar(random);
			length += random;
		}
	}
	putchar(2772 - length);
	return (0);
}
