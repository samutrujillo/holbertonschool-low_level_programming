#include <stdio.h>
#include "dog.h"
/**
 * init_dog - program that prints its name.
 * @d: array of character pointers
 * @name: array of character pointers
 * @age: array of character pointers
 * @owner: array of character pointers
 * Return: 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	}

}
