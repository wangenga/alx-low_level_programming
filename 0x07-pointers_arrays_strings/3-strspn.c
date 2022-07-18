#include "main.h"
/**
 * _strspn - main function
 * @s: pointer to the string
 * @accept: character to locatein the string
 * Return: number of byte in the intitial s ,bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, c, p = 0;

	while (s[i])
	{
		for (c = 0; accept[c]; c++)
		{
			if (s[i] == accept[c])
			{
				p++;
			}
		}
		if (p < i)
		{
			break;
		}
		i++;
	}
	return (p);
}
