#include "main.h"
/**
 * print_diagonal-prints a diagonal line
 * @n: size of line
 * Return: Always 0(success)
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < i; b++)
			{
				_putchar(' ');
			}
			_putchar (98);
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
