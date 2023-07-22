#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: numbers of args
 * @...: int to sum
 * Return: int sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int s - 0, i = n;
	va_list ap;

	if (!n)
	{
		return (NULL);
	}
	va_start(ap, n);
	while (i--)
		s += va_arg(ap, int);
	va_end(ap);
	return (s);
}
