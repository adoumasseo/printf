#include "main.h"

/**
 * _printf - a fct that print somethings depend of format
 * @format: it's the format
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, n = 0, t;
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			t = handler(format[i], args);
			if (format[i] == '%')
				n += write(1, &format[i], 1);
			else if (t != -1)
			{
				n += t;
			}
			else
			{
				write(1, &format[i - 1], 1);
				write(1, &format[i], 1);
				n += 2;
			}
		}
		else
		{
			n += write(1, &format[i], 1);
		}
		i++;
	}
	return (n);
}
