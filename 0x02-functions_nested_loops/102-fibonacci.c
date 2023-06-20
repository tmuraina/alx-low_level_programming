#include "main.h"

/**
 * main - Entry for task 102
 * Return: Always return 0
 */

int main(void)
{
	int i;
	unsigned long int fib1 = 0, fib2 = 1, fib_sum;

	for (i = 0; i < 50; i++)
	{
		fib_sum = fib1 + fib2;
		printf("%lu", fib_sum);

		fib1 = fib2;
		fib2 = fib_sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ")
	}

	return (0);
}
