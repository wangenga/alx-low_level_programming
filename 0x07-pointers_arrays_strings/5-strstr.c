#include "main.h"
/**
 * *_strstr - main function locates a substring
 * @haystack: located a string
 * @needle: string to locate
 * Return: a pointer to the beginning of haystack else null
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
}
