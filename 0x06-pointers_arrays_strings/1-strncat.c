#include "main.h"
/**
 * _strncat - concatenate two strings but add inputed number of bytes
 * description: concatenates two strings
 * @dest: string to be appended upon
 * @src: sring to be completed at end of dest
 * @n: integer parameter to compare index to
 * Return: returns new con catenate string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (dest[i++])
		len++;
	for (i = 0; src[i] && i < n; i++)
		dest[len++] = src[i];
	return (dest);
}
