#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum nuber ofcoinsto change for an amount
 * @argc: number of arguements
 * @argv: array f pointers
 * Return: if not exactly one 1, else 0
 */
int main(int argc, char *argv[])
{
	int cent, coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	if (cent > 25)
	{
		while (cent >= 25)
			cent -= 25, coin++;
	}
	if (cent > 10 && cent < 25)
	{
		while (cent >= 10)
			cent -= 10, coin++;
	}
	if (cent > 5 && cent < 10)
	{
		while (cent >= 5)
			cent -= 5, coin++;
	}
	if (cent > 2 && cent < 5)
	{
		while (cent >= 2)
			cent -= 2, coin++;
	}
	if (cent == 1 || cent == 2 || cent == 5 || cent == 10 || cent == 25)
	{
		coin++;
	}
	printf("%d\n", coin);
	return (0);
}
