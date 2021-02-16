#include "holberton.h"
/**
 * _atoi - function
 * @s: string to transform
 * Return: integer
 */
int _atoi(char *s)
{
	int n;
	int sign = 1;
	unsigned int res = 0;

	for (n = 0; *(s + n) != '\0'; n++)
	{
		if (*(s + n) == '-')
			sign *= -1;
		if (*(s + n) >= '0' && *(s + n) <= '9')
			res = res * 10 + (*(s + n) - '0');
		else if (res > 0)
			break;
	}
	return (res * sign);
}
