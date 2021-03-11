#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that prints its name.
 * @argc: array of character pointers
 * @argv: array of character pointers
 * Return: o
 */
int main(int argc, char *argv[])
{
	int num1, num2;
 /*if argc is diferent or 4 my program print Error*/
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
/*cast firs argument to int */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' &&
	     argv[2][0] != '/' && argv[2][0] != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (num2 == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", (get_op_func(argv[2])(num1, num2)));

	return (0);
}
