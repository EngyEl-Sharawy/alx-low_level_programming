#include"main.h"

/**
 * _abs - function that computes the absolute value of an interger
 *
 * @n: takes integer type for function
 *
 * Return: 0 (Success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
