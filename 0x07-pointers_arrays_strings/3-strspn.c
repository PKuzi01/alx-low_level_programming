#include "main.h"

/**
 * _strspn - gets the legth of prefix substring
 *
 * @s: pointer
 * @accept: pointer
 *
 * Return: x
 */

unsigned int _strspn(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{

			if (s[x] == accept[y])
				break;
		}

		if (!accept[y])
			break;
	}

	return (x);
}
