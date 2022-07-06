#include "main.h"
#include <stdio.h>
/**
 * print_to_98-print all numbers for n to 98
 * @n: the starting point
 * Return: Always 0(success)
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%d", n);
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
}
