#include<stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: namber of command line arguments
 * @argv: pointer of an array of command line arguments
 * Return: 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
