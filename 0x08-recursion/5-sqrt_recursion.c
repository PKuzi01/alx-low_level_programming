#include "main.h"

/**
 * _sqrt_natural - returns the natural square
 * root of a number
 *
 * @n: variable
 * @x: variable
 *
 * Return: 0 - success
 */

int _sqrt_natural(int n, int x)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	if (n == 1)
		return (1);

	if (x > n / 2)
		return (-1);

	if (n != x * x)
		return (_sqrt_nat(n, x + 1));

	if (n == x * x)
		return (x);

	return (-1);
}

/**
 * _sqrt_recursion - returns natural square
 * root of a number
 *
 * @n: variable
 *
 * Return: 0 - success
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_nat(n, 0));
}
