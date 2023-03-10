#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplie two numbers
 *
 * @argc: variable
 * @argv: array variable
 *
 * Return: 0 - success
 */
int main(int argc, char *argv[])
{
	int rmult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		rmult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", rmult);
	}

	return (0);
}
