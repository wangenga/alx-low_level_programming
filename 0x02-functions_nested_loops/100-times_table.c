minclude "main.h"
/**
 * print_times_table: print the times tables
 * @n:starting point
 * Description:prints the n times table
 * Return:Always 0(success)
 */
void print_times_table(int n)
{
	int x, y, z;
	
	for ( n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0');
			for (y = 1; y <= n; y++)
			{
				_putchar(',');
				_putchar(' ');
				z = x * y;

				if (z <= 99)
					_putchar(' ');
				if (z <= 9)
					_putchar(' ');
				if (z >= 100)
				{
					_putchar((z / 100) + '0');
					_putchar((z /10) % 10 + '0');
				}
				else if (z <= 99 && z >= 10)
				{
					_putchar((z / 10) + '0');
				}
				_putchar((z % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
