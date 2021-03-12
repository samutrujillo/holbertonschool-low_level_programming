
#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * struct chfmt - struct
 *@f: the variable.
 *@c: another the variable
 *return: dest
 */
typedef struct chfmt
{
	char c;
	void (*f)(va_list);
} fmt_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void p_char(va_list c);
void p_integer(va_list i);
void p_float(va_list f);
void p_string(va_list s);
#endif /* VARIADIC_FUNCTIONS_H */
