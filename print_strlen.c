#include "main.h"

/**
 * _strlen - finds the length of a string.
 * @str: string
 * Return: i
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);

}

/**
 * _strlenc - finds length of a string but for constant char pointer str
 * @str: char pointer
 * Return: i
 */

int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
