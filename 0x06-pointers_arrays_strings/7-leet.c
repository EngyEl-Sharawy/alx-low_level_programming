#include"main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * @c: string
 *
 * Return: string that is encoded
*/

char *leet(char *c)
{
	char *cp = c;
	char key[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	int value[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*c == key[i])
			{
				*c = value[i] + '0';
			}
		}
		c++;
	}

	return (cp);
}
