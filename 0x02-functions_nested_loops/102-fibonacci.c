#include "main.h"

/**
 * main - Entry for task 102
 * Return: Always return 0
 */

int main(void)
{
	int i;
	unsigned long int fib1 = 1, fib2 = 2, fib_sum;

	print_number(fib1);
	_putchar(',');
	_putchar(' ');

	print_number(fib2);

	for (i = 3; i <= 50; i++)
	{
		fib_sum = fib1 + fib2;
		_putchar(',');
		_putchar(' ');
		print_number(fib_sum);

		fib1 = fib2;
		fib2 = fib_sum;
	}

	_putchar('\n');

	return (0);
}
