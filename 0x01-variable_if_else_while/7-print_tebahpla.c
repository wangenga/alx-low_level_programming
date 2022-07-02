#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main-executable function
 * Description: prints alphabets in reverse
 * Return:Always 0(success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
