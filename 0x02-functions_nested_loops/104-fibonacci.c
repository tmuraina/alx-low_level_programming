#include <stdio.h>

/**
 * main - Entry for task 104
 * Return: always return 0 for success
 * prev: previous term
 * current: current term
 * next: next term
 */

int main(void)
{
	unsigned long int prev = 1;
	unsigned long int current = 2;
	unsigned long int next;

	printf("%lu, %lu, ", prev, current);

	for (int i = 3; i <= 98; i++)
	{
		next = prev + current;
		printf("%lu", next);

		if (i != 98)
			printf(", ");

		prev = current;
		current = next;
	}

	printf("\n");

	return (0);
}
