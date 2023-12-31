#include "main.h"
#include <stddef.h>

/**
 * get_print_func - Description
 * @c: char
 * Description: printf project
 * Return: int
 */
int (*get_print_func(char c))(va_list)
{
	cs_print css[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_d},
		{"u", print_d},
		{"b", print_b},
		{"r", print_r},
		{NULL, NULL}
	};
	int i = 0;

	while (css[i].cs != NULL)
	{
		if (c == *css[i].cs)
			return (css[i].f);
		i++;
	}

	return (NULL);
}
