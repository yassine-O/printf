#include "main.h"

/**
 * print_r - writes the character c to stdout
 * @ap: variadic
 * Return: 1.
 */
int print_r(va_list ap)
{
	int i, len = 0;
	char *str = va_arg(ap, char *);

	if (str == NULL)
		str = "(null)";

	while (str[len])
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(str[i]);

	return (len);
}
