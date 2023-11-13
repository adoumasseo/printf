#include "main.h"
#include <unistd.h>

int main(void)
{
	int l1, l2;
	_printf("Let's try to printf a simple sentence.\n");
	printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c][%c]\n", 'H', "cacac");
	printf("Character:[%c][%c]\n", 'H', 'H');
	l1 = _printf("String:[%s]%%%%\n", "I am a string !");
	l2 = printf("String:[%s]%%%%\n", "I am a string !");
	_printf("Unknown:[%r]\n");
	printf("%d; %d\n", l1, l2);
	return (1);
}
