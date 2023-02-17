#include <stdio.h>

/**
 * main - starting function
 * {} - executed code
 * Return: 0 - success
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter);
	putchar('\n');

	return (0);
}
