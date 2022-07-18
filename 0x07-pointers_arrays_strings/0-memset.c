#include "main.h"
/**
 * *_memset- main function
 * @s: pointer to buffer
 * @b: constant byte
 * @n: size of the buffer to fil
 * Description: fills a memeory with a constant byte
 * Return: pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
