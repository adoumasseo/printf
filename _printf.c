#include "main.h"

/**
 * _printf - a fct that print somethings depend of format
 * @format: it's the format
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	match p[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", print_37},
		{"%i", print_int}, {"%d", print_dec}, {"%r", print_revs},
		{"%R", print_rot13}, {"%b", print_bin},
		{"%u", print_unsigned},
		{"%o", print_oct}, {"%x", print_hex}, {"%X", print_HEX},
		{"%S", print_nonprint}, {"%p", print_point}
	};

	va_list args;
	int i = 0, j, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here;
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (p[j].id[0] == format[i] && p[j].id[1] == format[i + 1])
			{
				length += p[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		length++;
		i++;
	}
	va_end(args);
	return (length);
}
