#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two
 * diagonals of a square matrix of integers
 *
 * @a: pointer
 * @size: variable
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int x, sum;

	sum = 0;

	for (x = 0; x < size; x++)
		sum += a[(size + 1) * x];
	printf("%d, ", sum);

	sum = 0;

	for (x = 1 ; x <= size; x++)
		sum += a[(size - 1) * x];
	printf("%d\n", sum);
}
