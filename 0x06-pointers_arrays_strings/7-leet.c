#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @s: pointer
 *
 * Return: 0 - success
 */

char *leet(char *s)
{
	int x;
	int y;
	char c[] = "aeotlAEOTL";
	char d[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (x = 0; s[x] != '\0'; x++)
		for (y = 0; c[y] != '\0'; y++)
			if (s[x] == c[y])
				s[x] = d[y];
	return (s);
}
