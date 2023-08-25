#include "main.h"

/**
 * print_b - writes the character c to stdout
 * @ap: variadic
 * Return: 1.
 */
int print_b(va_list ap)
{
	int i, len = 0;
	unsigned int num = va_arg(ap, unsigned int);
	int tab[10];

	for (i = 0; num > 0; i++)
	{
		tab[i] = num % 2;
		num /= 2;
		len++;
	}

	while (i--)
	{
		_putchar('0' + tab[i]);
	}

	return (len);
}
