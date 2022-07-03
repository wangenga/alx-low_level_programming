#include <stdio.h>
#include <stdlib.h>
/**
 * main-executable function
 * Description:display all alphabets in lower case
 * Return:Always 0 (success)
 */
int main(void)
{
	char c;

	for  (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
