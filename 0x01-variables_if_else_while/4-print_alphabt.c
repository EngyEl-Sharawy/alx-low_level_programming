#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase  except q and e.
 *
 * Return: 0 (Saccess)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
		{
			ch++;
		} else
		{
			putchar(ch);
			ch++;
		}
	}

	putchar('\n');

	return (0);
}
