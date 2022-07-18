#include "main.h"
/**
 * *_strchr - main function
 * @s: pointer to string
 * @c: character to locate
 * Return: a pointer to the first occurrence of c or null
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (!c ? s : NULL);
}
