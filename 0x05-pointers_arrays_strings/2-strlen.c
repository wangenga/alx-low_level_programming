#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: input string
 * Return: length of string
 */
int _strlen(char *s)
{
	int index;

	index = 0;
	while (*s++)
		index++;
	return (index);
}
