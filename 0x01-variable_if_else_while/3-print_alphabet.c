#include <stdio.h>
#include <stdlib.h>
/**
 * main-executable function
 * Description:prints alphabets in upper and lower case
 * Return:Always 0(success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
