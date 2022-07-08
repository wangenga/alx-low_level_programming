#include "main.h"
/**
 * print_line-print a line
 * @n:size of line
 * Return:Always 0(success)
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_ptchar('\n');
}
