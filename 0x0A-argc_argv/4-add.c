#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function
 * @argc: variable
 * @argv: variable
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, j, res = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		res += atoi(argv[i]);
	}
	printf("%i\n", res);
	return (0);
}
