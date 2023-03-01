#include "main.h"

/**
 * string_toupper - changes all lowercase
 * characers of a string to uppercase
 *
 * @s: pointer
 *
 * Return: s
 */

char *string_toupper(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] >= 'a' && s[x] <= 'z')
		{
			s[x] = s[x] - 32;
		}
	}

	return (s);
}
