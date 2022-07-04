#include <stdio.h>
#include <stdlib.h>
/**
 * main-executable function
 * Description:prints numbers from 0 to 9
 * Return:Always 0(success)
 */
int main(void)
{
	char a = '0';

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
