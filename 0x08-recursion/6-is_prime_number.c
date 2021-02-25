#include "holberton.h"
/**
 * check_prime - Finds number for square root
 * @num: Iterator
 * @inserted_num: Number to find
 * Return: Finded number.
 */
int check_prime(int num, int inserted_num)
{
	if (num * num == inserted_num)
		return (0);
	if (num * num > inserted_num)
		return (1);
	if (num * num != inserted_num)
		return (check_prime(num + 1, inserted_num));
	else
		return (0);
}
/**
 * is_prime_number - Check if number is prime
 * @n: Number
 * Return: 1 if it's prime, 0 if it's false.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (check_prime(1, n));
}
