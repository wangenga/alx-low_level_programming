#include "main.h"
/**
 * leet - function that encode a string
 * @str: string that will be encoded
 * Return: returns encoded string
 */
char *leet(char *str)
{
	int i = 0;
	int x;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[++i])
	{
		for (x = 0; x <= 7; x++)
		{
			if (str[i] == leet[x] || str[i] - 32 == leet[x])
				str[i] = x + '0';
		}
	}
	return (str);
}
