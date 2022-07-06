#include "main.h"
/**
 * print_sign-print the magnitude of a number
 * @n:The int to print
 * Description:Print 0 when 0, 1 when + and -1 when -.
 * Return:Always 0(success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
