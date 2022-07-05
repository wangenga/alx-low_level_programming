#include "main.h"
/**
 * sign-print the magnitude of a number
 * @n:the int to print
 * Description:Print if 
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
