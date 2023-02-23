#include "main.h"

/**
 * print_line - draws a straight line
 *
 * @n: number of times '_' is printed
 *
 * Return: 0 (success)
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
