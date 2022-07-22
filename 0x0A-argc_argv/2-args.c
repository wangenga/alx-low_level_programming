#include <stdio.h>
/**
 * main - prints all arguments it recieves
 * @argc: count argument
 * @argv: array of pointers
 * Return: Always 0
 */
int main(int argc char *argv[])
{
	while(argc--)
		printf("%s\n", *argv++);
	return (0);
}
