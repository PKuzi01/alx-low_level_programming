#include "main.h"

/**
 * print_rev - prints a strin in reverse,
 * followed bt a new line
 *
 * @s: pointer
 *
 * Return: 0 - success
 */

void print_rev(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
	}
	for (x = x - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
