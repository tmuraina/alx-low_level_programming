#include "main.h"

/**
 * main - Entry for task 103
 * Return: always return o
 */

int main(void)
{
	long int prev = 1; // previous term
	long int current = 2; // current term
	long int next; // next term
	long int sum =2; // initial sum of even-valued terms

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
