#include"main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: pointer to the string
 * Return: int
*/

int _strlen_recursion(char *s)
{
	int nlen = 0;

	if (*s > '\0')
	{
		nlen += _strlen_recursion(s + 1) + 1;
	}

	return (nlen);
}
