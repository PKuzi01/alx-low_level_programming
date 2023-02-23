#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: number of times the '\' is printed
 *
 * Return: 0 (success)
 */

void print_diagonal(int n)
{
	int n;
	int x;
	int y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
