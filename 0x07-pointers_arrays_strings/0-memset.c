#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer
 * @b: variable
 * @n: variable
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (; n; n--)
	{
		s[n - 1] = b;
	}
	return (s);
}
