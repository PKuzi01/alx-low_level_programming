#include "main.h"

/**
 * print_most_numbers - prints most numbers from 0 to 9
 * followed by a new line
 * don't print 2 and 4
 *
 * Result: void
 */

void print_most_numbers(void)
{
	for (x = 0; x < 9; x++)
	{
		if (x != 2 || x != 4)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}