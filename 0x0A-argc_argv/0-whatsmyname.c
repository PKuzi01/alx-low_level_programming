#include "holberton.h"
#include <stdio.h>

/**
 * main - print the name of this program,
 * followed by a name
 *
 * @argc: variable
 * @argv: array variable
 *
 * Return: 0 - success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
