#include "main.h"
/**
 * *_memcpy - main function
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: no of bytes to copy
 * Description: copiesmemory address
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
