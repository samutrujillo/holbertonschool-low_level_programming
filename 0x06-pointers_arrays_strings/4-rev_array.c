#include "holberton.h"
/**
 * reverse_array - function Reverse an array
 * @a: string
 * @n: elements to swap
 * Return: none.
 */
void reverse_array(int *a, int n)
{
	int i, j;

	n--;
	for (i = 0; i < n; i++, n--)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
