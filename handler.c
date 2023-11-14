#include "main.h"

/**
 * handler - a fct that found the rigth function to an specifier and return it
 * @c: the specificer
 * @args: the list of printf argument
 *
 * Return: A pointer to the right fct if it's found else a void pointer
 */

int handler(char c, va_list args)
{
	print_t sp[4] = {
		{"c", _print_char},
		{"s", _print_string},
		{"d", _print_int},
		{"i", _print_int}
	};
	int i = 0;
	int n;

	while (i < 4)
	{
		if (sp[i].str[0] == c)
		{
			n = sp[i].f(args);
			return (n);
		}
		i++;
	}
	return (-1);
}
