#include "main.h"
#include <unistd.h>

int main(void)
{
	_printf("Let's try to printf a simple sentence.\n");
	printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c][%c]\n", 'H', 11000000500);
	printf("Character:[%c][%c]\n", 'H', 'G');
	_printf("String:[%s]; other: [%s]\n", "I am a string !","My name is ortniel%%");
	printf("String:[%s]\n", "I am a string !");
	_printf("Unknown:[%r]\n");
	return (1);
}
