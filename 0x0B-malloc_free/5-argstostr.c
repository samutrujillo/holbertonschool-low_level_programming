#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - check the code for Holberton School students.
 *@ac: the variable
 *@av: another variable
 *Return: dest
 */
char *argstostr(int ac, char **av)
{
	int count1 = 0, count2, count3, count4, Long = 0;
	char *s;

	if (ac == 0 || av == '\0')
		return (NULL);

	for (count1 = 0; count1 < ac; count1++)
	{
		count2 = 0;
		while (av[count1][count2] != '\0')
		{
			count2++;
		}
		Long  +=  count2 + 1;
	}
	s = malloc(sizeof(char) * (Long + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	Long = 0;
	for (count3 = 0; count3 < ac; count3++)
	{
		for (count4 = 0; av[count3][count4] != '\0'; count4++)
		{
			*(s + Long) = av[count3][count4];
			Long++;
		}
		*(s + Long) = '\n';
		Long++;
	}

	return (s);
}
