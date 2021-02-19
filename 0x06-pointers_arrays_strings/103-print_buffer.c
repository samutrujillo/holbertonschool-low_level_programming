#include "holberton.h"
/**
 * print_buffer - Prints buffer
 * @b: Buffer to print
 * @size: Buffer size
 * Return: none
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
		printf("\n");
	else
	{
		for (i = 0; i < size; i += 10)
		{
			printf("%08x: ", i);
			for (j = 0; j < 10; j++)
			{
				if (j % 2 == 0 && j != 0)
					printf(" ");
				if ((j + i) > size - 1)
				{
					printf("  ");
				}
				else
					printf("%.2x", b[i + j]);
			}
			printf(" ");
			for (j = 0; j < 10; j++)
			{
				if ((j + i) > size - 1)
					break;
				if (b[j + i] <= 31 || b[j + 1] >= '~')
					b[j + i] = '.';
				putchar(b[j + i]);
			}
			printf("\n");
		}
	}
}
