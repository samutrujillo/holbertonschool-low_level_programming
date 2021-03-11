#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - Add two numbers
 * @a: Number one
 * @b: Number two
 * Return: Addition
 */
int op_add(int a, int b)
{
	int res;

	res = a + b;
	return (res);
}
/**
 * op_sub - Difference bewteen two numbers
 * @a: Number one
 * @b: Number two
 * Return: Difference
 */
int op_sub(int a, int b)
{
	int res;

	res = a - b;
	return (res);
}
/**
 * op_mul - Multiplicates two numbers
 * @a: Number one
 * @b: Number two
 * Return: Multiplication
 */
int op_mul(int a, int b)
{
	int res;

	res = a * b;
	return (res);
}
/**
 * op_div - Divide two numbers
 * @a: Number one
 * @b: Number two
 * Return: Division
 */
int op_div(int a, int b)
{
	int res;

	res = a / b;
	return (res);
}
/**
 * op_mod - Remainder from two numbers
 * @a: Number one
 * @b: Number two
 * Return: Remainder of division
 */
int op_mod(int a, int b)
{
	int res;

	res = a % b;
	return (res);
}
