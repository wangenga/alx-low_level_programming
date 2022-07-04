#include <stdio.h>
#include <stdlib.h>
/*
 * main:dimentional array
 * Description: all possible combination of two digits from 0 to 9
 * Return:Always(0) success
 */
int main (void)
{
	int x;
	int y;

	for (x = 0; x < 9; x++)
	{
		for (y = x + 1; y < 10; y)
		{
			putchar((x % 10) + '0');
			putchar((y % 10) + '0');

			if (x == 8 && y == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n')
		return (0);
}
