#include "main.h"

/**
 * main - stating function
 * {} - executed code
 * Return: 0 - success
 */

int main(void)
{
	int i;
	char x[] = "_putchar";

	for (i = 0; i < 9; i++)
	{
		_putchar(x[i]);
	}

	_putchar('\n');
	
	return (0);
}
