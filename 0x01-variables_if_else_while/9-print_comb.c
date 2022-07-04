#include <stdio.h>
#include <stdlib.h>
/**
 * main-executable function
 * Description:prints numbers from 0 to 9
 * Return:Always 0(success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar((a % 10) + '0');
		if (a == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	return (0);
}
