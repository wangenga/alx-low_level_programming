#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-exection function
 * Description:Get random number
 * compare the number to 5
 * Return:Always 0 (success)
 */
int main(void)
{
	int x;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	printf("Last digit of %d", n);
	if (x > 5)
		printf("and is greater than 5\n")
	else if (x == 0)
		printf("and is zero\n")
	else
		printf("and is less than 6 and not 0\n")
			return (0);
}
