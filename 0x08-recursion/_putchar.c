#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character ch to stdout
 * @ch: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/

int _putchar(char ch)
{
        return (write(1, &ch, 1));
}
