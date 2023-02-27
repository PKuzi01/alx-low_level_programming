#include "main.h"

/**
 * _strcpy - (pointer function) copies the string
 * pointed to by src,
 * including the terminating null byte
 * to the buffer pointed to by dest
 *
 * @dest: pointer
 * @src: pointer
 *
 * Return: pointer value to dest
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
		dest[x] = src[x];
	dest[x] = '\0';
	return (dest);
}
