#include "holberton.h"
/**
 * compare_palindrome - prints buffer in hexa
 * @p: the address of memory to print
 * Return: s.
 */
int compare_palindrome(char *p)
{
	return (*p ? 1 + compare_palindrome(p + 1) : 0);
}

/**
 * solve_palindrome - prints buffer in hexa
 * @cont: the address of memory to print
 * @len: the address of memory to print
 * @p: the address of memory to print
 * Return: s.
 */
int solve_palindrome(char *p, int cont, int len)
{
	if (p[cont] == p[len] && p[cont] != '\0')
	{
		return (1 * solve_palindrome(p, cont + 1, len - 1));
	}
	else if (p[cont] == '\0' && p[len] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - prints buffer in hexa
 * @s: the address of memory to print
 * Return: s.
 */
int is_palindrome(char *s)
{
	int len;

	len = compare_palindrome(s);
	len--;
	if (len == 0)
	{
		return (1);
	}
	return (solve_palindrome(s, 0, len));
}
