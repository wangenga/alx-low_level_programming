#include <stdio.h>
/**
 * main-executable function
 * Description:print base 16 number
 * Return:Always 0(success)
 */
int main(void)
{
	int i;
	int y;

	for (i = 0; i < 10; i++)
	{
		putchar (i + '0');
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar (y);
	}
	putchar('\n');
	return (0);
}
