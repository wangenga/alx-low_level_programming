#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: the string target
 * Return: returns the encoded string
 */
char *rot13(char *str)
{
	int a;
	int b;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13key[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (j = 0; alphabet[b] != '\0'; b++)
		{
			if (str[a] == alphabet[b])
			{
				str[a] = rot13key[b];
				break;
			}
		}
	}
	return (str);
}
