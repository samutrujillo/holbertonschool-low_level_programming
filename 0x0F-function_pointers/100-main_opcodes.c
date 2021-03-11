#include <stdio.h>
#include <stdlib.h>
/**
 * main - Struct op
 * @ac: variable
 * @av: variable
 * Return: 0
 */
int main(int ac, char **av)
{
	int *(f)(int, char **);
	unsigned char *hex;
	int bytes, i;


	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(av[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	hex = (unsigned char *)main;
	for (i = 0; i < bytes - 1; i++)
		printf("%02hhx ", hex[i]);
	printf("%02hhx\n", hex[i]);
	return (0);
}
