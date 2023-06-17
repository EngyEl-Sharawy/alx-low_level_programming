#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of single-digit numbers.
 *
 * Return: 0 (Saccess)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		} else
		{
			putchar(digit + 48);
		}

		digit++;
	}

	putchar('\n');

	return (0);
}
