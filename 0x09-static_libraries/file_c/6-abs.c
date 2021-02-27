#include "holberton.h"
/**
 *_abs - unction that computes the absolute value of an integer.
 *@n: this variable
 *Return:  (n)  Always
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
