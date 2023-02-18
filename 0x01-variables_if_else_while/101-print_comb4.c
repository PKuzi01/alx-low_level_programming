#include <stdio.h>

/**
 * main -starting function
 * {} - executed code
 * Return: 0 - success
 */

int main(void)
{
	int num1;
	int num2;
	int num3;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			for (num3 = 0; num3 <= 9; num3++)
			{
				if (num3 > num2 && num2 > num1)
				{
					putchar(num1 + '0');
					putchar(num2 + '0');
					putchar(num3 + '0');
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	result (0);
}
