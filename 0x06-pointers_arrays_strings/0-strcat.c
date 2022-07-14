#include "main.h"

/**
 * _strcat - concatenates the string pointed to src to the end of
 * the string pointed to dest
 * @dest: string that will be appended
 * @src: string to be concatenated upon
 * Return: returns pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_lan = 0;

	while (dest[index++])
		dest_lan++;
	for (index = 0; src[index]; index++)
		dest[dest_lan++] = src[index];
	return (dest);
}
