#include "main.h"
#include <stdio.h>

/**
 * main - print the number of arguments passed into it
 *
 * @argc: variable
 * @argv: array variable
 *
 * Return: 0 - succes.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
