#include "main.h"

/**
 * print_rev - prints a reverse string
 * @s: input string
 */
void print_rev(char *s)
{
	int i;
	int l;

	for (l = 0; s[i] != '\0'; l++)

		for (i = l - 1; s[i] != '\0'; i--)
		{
			_putchar(s[i]);
		}
	_putchar('\n');
}
