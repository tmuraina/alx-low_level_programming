#include <stdio.h>

/**
 * main - Entry for task 104
 * Return: always return 0 for success
 * prev: previous term
 */

int main(void)
{
	unsigned long int i;
	unsigned long int prev = 1;
	unsigned long int next = 2;
	unsigned long int x = 1000000000;
	unsigned long int prev1;
	unsigned long int prev2;
	unsigned long int next1;
	unsigned long int next2;

	printf("%lu", prev);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", next);
		next += prev;
		prev = next - prev;
	}
	prev1 = (prev / x);
	prev2 = (prev % x);
	next1 = (next / x);
	next2 = (next % x);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", next1 + (next2 / x));
		printf("%lu", next2 % x);
		next1 = next1 + prev1;
		prev1 = next1 - prev1;
		next2 = next2 + prev2;
		prev2 = next2 - prev2;
	}
	printf("\n");
	return (0);
}
