#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct s_print - define a struct with typedef for a specifier & fct
 *
 * @str: the specifier
 * @f: fct associate to the specifier
 */
typedef struct s_print
{
	char *str;
	int (*f)(va_list args);
} print_t;


int _printf(const char *format, ...);
int _putchar(char c);
int _print_char(va_list args);
int _print_string(va_list args);
int handler(char c, va_list args);

#endif
