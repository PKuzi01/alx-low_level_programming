#include "main.h"

/**
 * puts_half - prints half a string, followed by a new line
 *
 * @str: pointer
 *
 * Return: void
 */

void puts_half(char *str)
{
	int x;
	int y;

	for (x = 0; str[x] != 0; x++)
		;
	if (x % 2 == 0)
		y = x / 2;
	else
		y = x - ((x - 1) / 2);

	for (; y < x; y++)
		_putchar(str[y]);
	_putchar(10);
}
