#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: pointer
 * @src: pointer
 * @n: variable
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (; n; n--)
	{
		dest[n - 1] = src[n - 1];
	}
	return (dest);
}
