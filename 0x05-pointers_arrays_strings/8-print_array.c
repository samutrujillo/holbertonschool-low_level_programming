#include "holberton.h"
/**
 * print_array - function
 *@a: variable
 *@n: variable
 */
void print_array(int *a, int n)
{
	int c = 0;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);
		if (c < n - 1)
			printf(", ");
	}
	printf("\n");
}
