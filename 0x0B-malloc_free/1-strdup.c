#include "main.h"
#include <stdlib.h>

/**
 * _strlen - count the length of a string
 *
 * @s: pointer
 *
 * Return: x
 */

unsigned int _strlen(char *s)
{
	unsigned int x;

	for (x = 0; s[x]; x++)
		;

	return (x);
}

/**
 * _strdup - create a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: pointer
 *
 * Return: dup
 */
char *_strdup(char *str)
{
	unsigned int x, size;
	char *dup;

	if (str == NULL)
		return (NULL);

	size = _strlen(str);
	dup = malloc(sizeof(char) * (size + 1));

	if (dup == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		dup[x] = str[x];

	return (dup);
}
