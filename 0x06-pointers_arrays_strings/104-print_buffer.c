#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer 10byte at aa time
 * @b: the buffer to be printed
 * @size:the number of the bytes
 */
void print_buffer(char *b, int size)
{
	int byte, index;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: ",byte);
		for (index = 0; index < 10; index++)
		{
			if((index + byte) >= size)
				printf(" ");
			else
				printf("%02x",
