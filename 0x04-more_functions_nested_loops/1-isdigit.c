#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 *
 * @c: character on ASCII table
 *
 * Return: 1 if c is a digit;
 * 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 1 && c <= 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
