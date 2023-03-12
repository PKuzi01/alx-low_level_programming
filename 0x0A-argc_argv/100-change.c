#include <stdio.h>
#include <stdlib.h>

/**
 * _change - count the minimum number of coins to make change
 * for an amount of money
 *
 * @num: variable
 * @mod: array variable
 * @size: array variable 
 * 
 * Return: min. number of coins
 */

int _change(int num, int *mod, int size)
{
	if (num < *mod)
		return (0);
	return ((num / *(mod + size - 1)) +
	       _change((num % *(mod + size - 1)), mod, size - 1));
}

/**
 * main - print the change for an amount of money
 *
 * @argc: variable
 * @argv: array variable
 *
 * Return: 0 - success
 */
int main(int argc, char *argv[])
{
	int num, size, x;
	int coins[] = {1, 2, 5, 10, 25};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num = atoi(argv[1]);
		size = 5;
		if (num <= 0)
			printf("0\n");
		else
		{
			x = _change(num, &coins[0], size);
			printf("%d\n", x);
		}
	}

	return (0);
}
