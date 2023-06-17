#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: prints the lowercase alphabet in reverse.
 *
 * Return: 0 (Saccess)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}

	putchar('\n');

	return (0);
}
