#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars, and initializes it with
 * a specific char
 *
 * @size: variable
 * @c: variable
 *
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		s[x] = c;

	return (s);
}
