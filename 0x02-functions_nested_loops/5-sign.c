#include "main.h"

/**
 * print_sign- prints the sign of a number
 * (greater than less than or equal to)
 * return- 1 and prints + if n > 0,
 * 0 and prints 0 if n = 0,
 * -1 and prints - n > 0
*/

int print_sign(int n)
{
	if (n > 0)
		{
			_putchar(43);
			return (1);
		} else if (n < 0)
		{
			_putchar(45);
			return (-1);
		} else
		{
			_putchar(48);
			return (0);
		}

		_putchar('\n');
}
