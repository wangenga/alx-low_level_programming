#include "main.h"
/**
 * print_last_digit- last
 * @n: The int to print
 * Return:Always 0(success)
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		x = (-1 * (n % 10));
		_putchar (x + '0');
		return (x);
	}
	else
	{
		x = (n % 10);
		_putchar (x + '0');
		return (x);
	}
}
