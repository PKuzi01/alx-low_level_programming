#include "main.h"

/**
 * swap_int - swaps two integers
 *
 * @a: pointer
 * @b: pointer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
