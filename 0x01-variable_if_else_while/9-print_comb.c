#include <stdio.h>
#include <stdlib.h>
/**
 * main-executable function
 * Description:prints numbers from 0 to 9
 * Return:Always 0(success)
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
