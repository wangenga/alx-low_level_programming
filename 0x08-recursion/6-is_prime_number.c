#include "main.h"
/**
 * sqtRecursive - computes square root recusively
 * @n: given number
 * @m: comparision number
 * Return: 1 if not found squareroot, else squareroot
 */
int sqtRecursive(int n, int m)
{
	if (n <= 0)
		return (-1);
	if (n * n == m)
		return (n);
	return (sqtRecursive(n - 1, m));
}
/**
 * _sqrt_recursion - find the natural square root
 * @n: given number
 * Return: square root of n or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (sqtRecursive(n / 2, n));
}
/**
 * is_prime_number - checks if a number is prime number
 * @n: given number
 * Return: 1 if number is prime else 0
 */
int is_prime_number(int n)
{
	if (n <= 1 || _sqrt_recursion(n) >= 1)
		return (0);
	if (_sqrt_recursion(n) == -1)
		return (1);
	return (_sqrt_recursion(n));
}
