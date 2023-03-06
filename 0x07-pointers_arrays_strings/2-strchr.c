#include "main.h"

/**
 * _strchr - locates a charter in a string
 *
 * @s: pointer
 * @c: variable
 *
 * Return: 0 - success
 */

char *_strchr(char *s, char c)
{
	unsigned int x;

	for (x = 0; ; x++)
	{
		if (s[x] == c)
			return (&s[x]);

		else if (s[x] == '\0')
			return (0);
	}
}
