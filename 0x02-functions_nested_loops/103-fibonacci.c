#include "main.h"

/**
 * main - Entry for task 103
 * Return: always return 0
 * prev: previous term
 * current: current term
 * next: next term
 * sum: initial sum of even_valued terms
 */

int main(void)
{
	long int prev = 1;
	long int current = 2;
	long int next;
	long int sum = 2;

	while (current <= 4000000)
	{
		next = prev + current;
		if (next % 2 == 0)
			sum += next;
		prev = current;
		current = next;
	}

	print_number(sum);
	_putchar('\n');

	return (0);
}

/**
 * print_number - prints a number
 * @num: the number
 */

void print_number(long int num)
{
	if (num == 0)
	{
		_putchar('0');
		return;
	}

	char buffer[20];
	int i = 0;

	while (num != 0)
	{
		buffer[i] = (num % 10) + '0';
		num /= 10;
		i++;
	}

	for (int j = i - 1; j >= 0; j--)
		_putchar(buffer[j]);
}
