#include <stdio.h>
/**
 * before - add a text
 * Return: None.
 */
void __attribute__ ((constructor)) before()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
