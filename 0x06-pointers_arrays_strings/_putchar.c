/**
 * _putchar - writes the characterc to stdout
 * @c: the character to output
 * Return: On success 1
 * on error, -1 is returned, and error is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
