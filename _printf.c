#include "main.h"

/**
 * _printf - Description
 * @format: pointer
 * Description: printf project
 * Return: int
 */
int _printf(const char *format, ...)
{
	int i = 0, n = 0;
	va_list ap;
	int (*print_func)(va_list);

	va_start(ap, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				_putchar('%');
				n++;
				i++;
				continue;
			}

			print_func = get_print_func(format[i]);
			if (print_func == NULL)
			{
				_puts("Error");
				exit(1);
			}
			n += print_func(ap);
		}
		else
		{
			_putchar(format[i]);
			n++;
		}
		i++;
	}

	va_end(ap);

	return (n);
}
