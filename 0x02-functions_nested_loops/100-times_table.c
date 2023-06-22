#include"main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0.
 *
 * @n: takes number input
*/

void print_times_table(int n)
{
	int prod, num, mult;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; ++num)
		{
			_putchar(48);
			for (milt = 1; mult <= n; ++mult)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * mult;

				if (prod <= 9)
					_putchar(' ');
				if (prod <= 99)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
	}
}
