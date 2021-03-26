#include "holberton.h"
/**
 * get_bit - function that returns the value of a bit
 * @n: var
 * @index: var
 * Return: value of the bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > sizeof(n) * 8 - 1) ? -1 : (int)(n >> index) & 1);
}
