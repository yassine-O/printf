#include "main.h"

/**
 * print_c - writes the character c to stdout
 * @ap: variadic
 * Return: 1.
 */
int print_c(va_list ap)
{
	int c = va_arg(ap, int);

	_putchar(c);

	return (1);
}
