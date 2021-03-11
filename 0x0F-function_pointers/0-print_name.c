#include "function_pointers.h"
/**
 * print_name - program that prints its name.
 * @name: array of character pointers
 * @f: array of character pointers
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	(*f)(name);
}
