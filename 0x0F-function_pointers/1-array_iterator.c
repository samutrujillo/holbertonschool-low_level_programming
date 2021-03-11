#include "function_pointers.h"
/**
 * array_iterator -  function that executes a function given as a parameter
 * @array: variable
 * @size: variable
 * @action: variable
 * Return: void.
 */
void array_iterator(int *array, int size, void (*action)(int))
{
	int i;

	if (action && size && array)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}

}
