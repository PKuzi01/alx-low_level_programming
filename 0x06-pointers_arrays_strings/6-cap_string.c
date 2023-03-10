#include "main.h"

/**
 * cap_string - capitalises all words of a string
 *
 * @s: pointer
 *
 * Return: s
 */

char *cap_string(char *s)
{
	int x;
	int y;

	char sep[] = ", \t\n.;?\"(){}";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; sep[y] != '\0'; y++)
		{
			if (s[x] == sep[y])
			{
				if (s[x + 1] >= 'a' && s[x + 1] <= 'z')
					s[x + 1] = s[x + 1] - 32;
			}
		}

		if (x == 0)
		{
			if (s[x] >= 'a' && s[y] <= 'z')
				s[x] = s[x] - 32;
		}
	}
	return (s);
}
