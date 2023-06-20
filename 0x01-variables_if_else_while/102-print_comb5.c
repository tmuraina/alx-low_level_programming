#include <stdio.h>

/**
 * main - Entry for program 102
 * Return: 0 for success
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			putchar(num1 / 10 + '0');
			/* To print the tens digit */
			putchar(num1 % 10 + '0');
			/* To print the last digit */
			putchar(' ');
			putchar(num2 / 10 + '0');
			putchar(num2 % 10 + '0');
			if (!(num1 == 99 && num2 == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
