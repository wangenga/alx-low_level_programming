#include <stdio.h>
/**
 * main-executable function
 * Description:prints the first 50 fibonacci numbers
 * Return:Always 0(success)
 */
int main(void)
{
	unsigned long sum;
	int count;
	unsigned long no1 = 0, no2 = 1;

	for (count = 0; count < 50; count++)
	{
		sum = no1 + no2;
		printf("%lu, ", sum);

		no1 = no2;
		no2 = sum;
	}
	return (0);
}
