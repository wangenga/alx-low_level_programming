#include <stdio.h>
/**
 * main - prints all arguments it reci
 * @argv: array of pointers
 * Return: Always 0
 */
int main(int argc char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
