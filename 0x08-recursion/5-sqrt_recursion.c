#include "main.h"
/**
 * sqrtRecursive -natural square root of a number
 * @m: given number
 * @start: initial number
 * @end: last number within limit
 * Return: 1 if not found,else square root
 */
int sqrtRecursive(int start, int end, int m)
{
	long mid;

	if (end >= start)
	{
		mid = start + (end - start) / 2;
		if (mid * mid == m)
			return (mid);
		/* following binary search */
		if (mid * mid > m)
			return (sqrtRecursive(start, mid - 1, m));
		if (mid * mid < m)
			return (sqrtRecursive(mid + 1, end, m));
	}
	return (-1);
}
/**
 * _sqrt_recursion - finds the natural square root
 * @n: given number
 * Return: square root of n or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrtRecursive(2, n, n));
}
