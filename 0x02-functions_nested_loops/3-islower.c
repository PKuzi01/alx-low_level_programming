#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: character in ASCII table
 *
 * Return: 1 if c is lowercasee, 0 if otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');

}
