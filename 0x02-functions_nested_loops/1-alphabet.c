#include "main.h"
/**
 * print_alphabet-executable function
 * Description:Prints the lowercase alphabet
 * Return:Always 0(success)
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n')
}
