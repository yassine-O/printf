#include "main.h"

/**
 * print_s - writes the character c to stdout
 * @ap: variadic
 * Return: 1.
 */
int print_s(va_list ap)
{
	int i, len = 0;
	char *str = va_arg(ap, char *);

	while (str[len])
		len++;

	for (i = 0; i < len; i++)
		_putchar(str[i]);

	return (len);
}
