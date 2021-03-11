#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Struct op
 * @ac: variable - Number of arguments
 * @av: variable - Arguments
 * Return: 0
 */
int main(int ac, char **av)
{
	int num1, num2, res;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((av[2][0] != '+' && av[2][0] != '-' && av[2][0] != '*' &&
	    av[2][0] != '/' && av[2][0] != '%') || av[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	if (num2 == 0 && (av[2][0] == '/' || av[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	res = (*get_op_func(av[2]))(num1, num2);
	printf("%i\n", res);

	return (0);
}
