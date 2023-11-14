#include "main.h"

/**
 * printf_char - a function that print a char
 * @args: va_list argument of printf function
 *
 * Return: the number of char print
 */

int printf_char(va_list args)
{
	char str;

	str = va_arg(args, int);
	_putchar(str);
	return (1);
}

/**
 * printf_string - a function that print a string
 * @args: va_list arg of _printf function
 *
 * Return: the number of char print or -1 on fails
 */

int printf_string(va_list args)
{
	char *str;
	int i, length;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
}
