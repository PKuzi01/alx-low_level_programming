#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * followed by a  new line
 *
 * Return: void
 */

void print_numbers(void)
{
	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
