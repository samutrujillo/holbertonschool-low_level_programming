#include "function_pionters.h
/**
* print_name - function that prints a name
* @name: variable
* @f: variable
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
