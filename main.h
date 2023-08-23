#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct cs - Struct cs
 *
 * @cs: The conversion specifier
 * @f: The function associated
 */
typedef struct cs
{
	char *cs;
	int (*f)(va_list ap);
} cs_print;

int _printf(const char *format, ...);
int _putchar(char c);
void _puts(char *str);
int (*get_print_func(char c))(va_list);

int print_c(va_list ap);
int print_s(va_list ap);

#endif
