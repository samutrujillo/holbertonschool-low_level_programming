#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Prints diagonal sum
 * @a: Array
 * @size: Dimention
 * Return: none
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	unsigned int sum = 0, sum2 = 0, aux = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i)
			{
				sum += *(a + aux);
			}
			if (i + j + 1 == size)
			{
				sum2 += *(a + aux);
			}
			aux++;
		}
	}
	printf("%i, ", sum);
	printf("%i\n", sum2);
}
