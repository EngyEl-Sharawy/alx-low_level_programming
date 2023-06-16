#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: 0 (Saccess)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}

	return (0);
}
