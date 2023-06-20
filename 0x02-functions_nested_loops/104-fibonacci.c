#include <stdio.h>

/**
 * main - Entry for task 104
 * Return: always return 0 for success
 * prev: previous term
 */

int main(void)
{
	unsigned long int i;
	unsigned long int prev1 = 1;
	unsigned long int prev2 = 2;

	printf("%lu", prev1);

	for (int i = 1; i < 98; i++)
	{
		printf(", %lu", prev2);
		prev2 += prev1;
		prev1 = prev2 - prev1;
	}


	printf("\n");

	return (0);
}
