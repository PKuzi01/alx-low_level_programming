#include "main.h"
/**
 * print_square - print a square, followed by a new line
 *
 * @size: var representing size of square
 *
 * Return: 0 (success)
 */

void print_square(int size)
{
	int x;
	int y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
				_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
