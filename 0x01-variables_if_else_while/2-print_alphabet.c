#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase.
 *
 * Return: 0 (Saccess)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
	}
	putchar("\n");

	return (0);
}
