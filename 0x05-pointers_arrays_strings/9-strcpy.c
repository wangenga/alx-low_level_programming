#include "main.h"

/**
 * _strcpy - copies string pointed by scr
 * @dest: the destination
 * @src: the copier
 * Return: returns copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *scr;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
