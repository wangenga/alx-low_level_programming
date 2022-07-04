#include <stdio.h>
/**
 * main-executable function
 * Description-prints single digit numbers of base 10
 * Return:Always 0(success)
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
		putchar((x % 10) + '0');
	putchar('\n');
	return (0);
}
