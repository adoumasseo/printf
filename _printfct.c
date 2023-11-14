#include "main.h"

/**
 * _print_char - a function that print a char
 * @args: va_list argument of printf function
 *
 * Return: the number of char print
 */

int _print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	return (write(1, &c, 1));
}

/**
 * _print_string - a function that print a string
 * @args: va_list arg of _printf function
 *
 * Return: the number of char print or -1 on fails
 */

int _print_string(va_list args)
{
	char *str;
	int length = 0;

	str = va_arg(args, char*);
	if (str == NULL)
		str = "(null)";
	while (str[length] != '\0')
		length++;
	return (write(1, str, length));
}

/**
 * _print_int - a fct that print an int
 * @args: va_list arg of printf
 *
 * Return: the number of char print or -1 on fails
 */
int _print_int(va_list args)
{
	int n, l = 0;
	char *str;

	n = va_arg(args, int);
	str = print_number(n);
	while (str[l] != '\0')
		l++;
	return (write(1, str, l));

}
