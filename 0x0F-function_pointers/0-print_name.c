#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: string of name
 * @f: function pointer  to print
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
