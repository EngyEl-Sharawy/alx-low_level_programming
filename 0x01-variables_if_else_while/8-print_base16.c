#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16 in lowercase.
 *
 * Return: 0 (Saccess)
*/

int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		if (digit == 58)
		{
			digit += 38;
		} else
		{
			putchar(digit);
		}

		digit++;
	}

	putchar('\n');

	return (0);
}
