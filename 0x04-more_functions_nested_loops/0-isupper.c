#include "main.h"

/**
 * _isupper - checks for the uppercase character
 *
 * @c: character on ASCII table
 *
 * Return: 1 if c is uppercase;
 * 0 if otherwise
 */

int _isupper(int c);
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
