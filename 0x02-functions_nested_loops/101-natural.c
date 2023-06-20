#include "main.h"

/**
 * main - Entry for task 101
 * Return: 0 for success
 */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	print_number(sum);
	_putchar('\n');

	return (0);
}
