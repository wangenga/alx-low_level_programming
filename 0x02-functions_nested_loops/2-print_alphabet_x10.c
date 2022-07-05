#include "main.h"
/**
 * print_alphabet_x10-executable funcion
 * Description:print alphabet 10 times
 * Return:Always 0(success)
 */
void print_alphabet_x10(void)
{
	int x;
	int count;

	count = 0;
	while (count < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			putchar(x);
		}
		count++;
		_putchar('\n');
	}
}

