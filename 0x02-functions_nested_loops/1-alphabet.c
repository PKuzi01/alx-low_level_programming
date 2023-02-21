#include "main.h"

/**
 * print_alphabet: prints the alphabet, in lowercase,
 * followed by a new line.
 *
 * can only use _putchar twice
 *
 * Return: void
 */

void print_alphabet(void)
{
	int letter;

	for (letter = 97; letter < 123; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
}
