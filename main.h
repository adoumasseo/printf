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
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);
int print_dec(va_list args);
int print_int(va_list args);
int print_bin(va_list val);
int print_unsigned(va_list args);
int print_oct(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);


int printf_char(va_list args);
int printf_string(va_list args);
int handler(char c, va_list args);

#endif
