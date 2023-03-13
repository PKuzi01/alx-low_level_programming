#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - return a pointer to a 2 dimensional array of integers
 *
 * @width: variable
 * @height: variable
 *
 * Return: ar2d
 */
int **alloc_grid(int width, int height)
{
	int x, y;

	int **ar2d;

	if (width <= 0 || height <= 0)
		return (NULL);

	/*pointer to pointer rows*/
	ar2d = (int **) malloc(height * sizeof(int *));

	if (ar2d == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		ar2d[x] = (int *)malloc(width * sizeof(int));

		if (ar2d[x] == NULL)
		{
			for (; x >= 0; x--)
				free(ar2d[x]);
			free(ar2d);
			return (NULL);
		}
	}

	/*filling array*/
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			ar2d[x][y] = 0;
	}

	return (ar2d);
}
