#include "main.h"
/**
 * *_strpbrk - main function
 * @s: string containing the bytes
 * @accept: the set of bytes
 * Return: pointer to the byte in s that matches accept else null
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
