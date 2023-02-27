#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: pointer
 *
 * Return: void
 */

void rev_string(char *s)
{
	int x;
	int y;
	int z;
	char c;

	for (x = 0; s[x] != '\0'; x++)
		;
	z = x - 1;

	for (y = 0; z >= 0 && y < z; z--, y++)
	{
		c = s[y];
		s[y] = s[z];
		s[z] = c;
	}
}
