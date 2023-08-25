#include "main.h"

/**
 * print_d - writes the character c to stdout
 * @ap: variadic
 * Return: 1.
 */
int print_d(va_list ap)
{
	int len = 1, q = 1;
	int num = va_arg(ap, int);

	if (num == NULL)
		num = 0;

	if (num < 0)
	{
		num = -num;
		_putchar('-');
		len++;
	}

	while (num > q * 10)
	{
		q *= 10;
		len++;
	}

	while (q >= 1)
	{
		_putchar('0' + (num / q));
		num %= q;
		q /= 10;
	}

	return (len);
}
