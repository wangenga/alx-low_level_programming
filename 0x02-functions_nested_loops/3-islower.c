#include "main.h"
#include <stdio.h>
/**
 * _islower-executable function
 * @c:contains value to be compared
 * Description:checks for lowercase letters
 * Return:Always 0(success)
 */
int _islower(int c)

{
	if (c > 'a' && c < 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
