#include "main.h"
/**
 * _isalpha-executable function
 * Description:Return 1 if c is a letter, lower or uppercase
 * Return:Always 0(success)
 */
int _isalpha(int c)
{
	int c;
	
	if ((c > 'a' && c <= 'z') || (c > 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
