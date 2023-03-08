#include "main.h"

/**
 * is_prime - returns 1 if the input int
 * is a prime number, otherwise
 * return 0
 *
 * @n: variable
 * @x: variable
 *
 * Return: 1 - success
 */

int is_prime(int n, int x)
{
	if (n % x == 0)
		return (0);

	if (x >= n / 2)
		return (1);
	else
		return (is_prime(n, x + 1));
	return (1);
}

/**
 * is_prime_number - identifies where the interger
 * is a prime number or not
 *
 * @n: variable
 *
 * Return: 1 - success
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_prime(n, 2));
}
