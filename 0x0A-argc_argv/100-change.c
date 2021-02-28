#include <stdio.h>
#include <stdlib.h>
/**
 * _get_change - tells you minimun cents to give back
 * @change: Argument count
 * Return: 0
 */
int _get_change(int change)
{
	int coins = 0;

	if (change <= 0)
		return (0);
	while (change > 0)
	{
		if (change % 25 < change)
		{
			change -= 25;
			coins++;
		}
		else if (change % 10 < change)
		{
			change -= 10;
			coins++;
		}
		else if (change % 5 < change)
		{
			change -= 5;
			coins++;
		}
		else if (change % 2 < change)
		{
			change -= 2;
			coins++;
		}
		else if (change % 1 < change)
		{
			change -= 1;
			coins++;
		}
	}
	return (coins);
}
/**
 * main - tells you minimun cents to give back
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d\n", _get_change(atoi(argv[1])));
		return (0);

	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
