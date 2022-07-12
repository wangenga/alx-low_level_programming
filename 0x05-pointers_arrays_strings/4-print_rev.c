#include "main.h"

/**
 * print_rev - prints a reverse string
 * @s: input string
 */
void print_rev(char *s)
{
	int i;
	int l;

	while (s[i])
		l++;

		for (i = l - 1; s[i] != '\0'; i--)
		{
			_putchar(s[i]);
		}
	_putchar('\n');
}
