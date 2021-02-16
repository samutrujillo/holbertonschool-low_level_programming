#include "holberton.h"
/**
* swap_int - function
* @a: variable
* @b: variable
* Return: 0
*/
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
