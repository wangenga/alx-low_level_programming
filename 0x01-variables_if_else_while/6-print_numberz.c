#include <stdio.h>
/**
 * main-executable function
 * Description-prints single digit numbers of base 10
 * Return:Always 0(success)
 */
int main(void)
{
	char x = '0';

	for (x = '0'; x < '10'; x++)
		putchar(x);
	return (0);
}
