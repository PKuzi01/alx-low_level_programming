#include <stdio.h>

/**
 * main - prints numbers 1 to 100, followed by a new line
 *
 * Return: 0 (sucess)
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 != 0)
		{
			printf("Fizz");
		}
		else if (x % 5 == && x % 3 != 0)
		{
			printf("Buzz");
		}
		else if (x % 3 == 0 && x % 5 ==)
		{
			printf("FizzBuzz");
		}
		else if (x == 1)
		{
			printf("%d", x);
		}
	}
	printf('\n');
	return (0);
}
