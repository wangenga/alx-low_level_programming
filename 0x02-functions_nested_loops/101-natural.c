#include <stdio.h>
#include <math.h>
/**
 * main-executable function
 * Description:sum of multiple of 1024
 * Result 0(success)
 */
int main(void)
{
	int x, sum = 0;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
			sum = sum + x;
	}
	printf("%d\n", sum);
	return (0);
}
