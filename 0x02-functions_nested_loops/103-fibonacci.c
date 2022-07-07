#include <stdio.h>
/**
 * main-executable function
 * Description:Print even fibonacci
 * Return:Always 0(success)
 */
int main(void)
{
	unsigned long sum;
	unsigned long A1 = 0;
	unsigned long A2 = 1;
	float y;
	
	if (sum < 40000000)
	{
		sum = A1 + A2;
		if ((sum % 2) == 0)
		{
			y += sum;
			print("%.0f\n", y);
		}
		A1 = A2;
		A2 = sum;
	}
	return (0);
}
