#include "main.h"
#include <stdio.h>
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
 * str_concat - concatenates two strings
 *
 * @s1: pointer
 * @s2: pointer
 *
 * Return: y
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int x, size1, size2;
	char *y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	y = malloc(sizeof(char) * (size1 + size2 + 1));

	if (y == NULL)
		return (NULL);

	for (x = 0; s1[x]; x++)
		y[x] = s1[x];
	for (x = 0; s2[x]; x++)
		y[x + size1] = s2[x];
	y[x + size1] = '\0';

	return (y);
}
