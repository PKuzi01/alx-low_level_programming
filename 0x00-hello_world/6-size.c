#include <stdio.h>

/**
 * main - the function
 * {} - the code being executed
 * ; - to complete the code
 * Return: 0 - success
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long  d;
	float f;

	printf("Size of an char: %lu byte(s)\n", sizeof(a));
	printf("Size of a int: %lu byte(s)\n", sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));

	return (0);
}
