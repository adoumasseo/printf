#include "main.h"

/**
 * _str_rev - a fct that reverse en string
 * @str: the string to reverse
 *
 * Return: A pointer to the new string
 */
char *_str_rev(char *str)
{
	char *buff;
	int l = 0, j, i;

	while (str[l] != '\0')
		l++;
	buff = malloc(sizeof(char) * l);
	if (buff == NULL)
		return (NULL);
	if (str[0] == '-')
	{
		buff[0] = '-';
		j = 1;
	}
	else
		j = 0;
	for (i = l - 1; i >= 0; i--)
	{
		if (j < l)
		{
			buff[j] = str[i];
			j++;
		}
	}
	return (buff);
}

/**
 * print_number - a fct that turn an int into string
 * @n: our int
 *
 * Return: a pointer to the final string
 */

char *print_number(int n)
{
	char buffer[BUFF_SIZE_D];
	char neg;
	int i;

	if (n < 0)
	{
		neg = '-';
		buffer[0] = neg;
		i = 1;
		n = -n;
	}
	else
		i = 0;
	while (n > 0)
	{
		neg = '0' + n % 10;
		buffer[i] = neg;
		n = n / 10;
		i++;
	}
	i++;
	while (i < BUFF_SIZE_D)
	{
		buffer[i] = '\0';
		i++;
	}

	return (_str_rev(buffer));
}

/**
 * _free_m - a fct that free a pointer initiliaze with malloc
 * @str: the pointer to free
 *
 * Return: Nothing is void type function
 */

void _free_m(char *str)
{
	free(str);
}
