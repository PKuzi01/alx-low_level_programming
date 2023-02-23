#include "main.h"

/**
 * print_triangle - print a triangle, followed by a new line
 *
 * @size: representation of the size of triangle
 *
 * Return: 0 (success)
 */

void print_triangle(int size)
{
	int size;
	int x;
	int y;
	int z;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = x; y < size; y++)
			{
				_putchar(" ");
			}
			for (z = 0; z <= x; z++)
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
