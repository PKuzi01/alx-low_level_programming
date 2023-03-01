#include "main.h"

/**
 * reverse_array - reverses the content
 * of an array of integers
 *
 * @a: pointer
 * @n: variable
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;
	int z;

	y = n - 1;

	for (x = 0; x < y; x++, y--)
	{
		z = a[x];
		a[x] = a[y];
		a[y] = z;
	}
}
