#include "main.h"
/**
 * _strncpy - C function that copies a string including
 * the terminating null byte, using th inputed number of byte
 * @dest: buffer storin the strng copy
 * @src: the source string
 * @n: number of byte copied
 * Return: returns
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
