#include "main.h"

/**
 * rev_string - reverses the string
 *
 * @s: pointer
 *
 * Return: void
 */

void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != 0; x++)
	{
		if (x % 2 == 0)
			_putchar (str[x]);
	}
	_putchar(10);
}
