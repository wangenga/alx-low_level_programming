#include "main.h"
/**
 * set_string - function that sets the value of a pointer to char
 * @s: pointer to address of string
 * @to: string to set thevalue
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
