#include <stdio.h>

/**
 * main - Entry for task 103
 * Return: always return 0
 * next: next term
 * sum: initial sum of even_valued terms
 */

int main(void)
{
	int i;
	unsigned long int j, k, next, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; j <= 4000000; ++i)
	{
		if (j % 2 == 0)
		{
			sum += j;
		}
		next = j + k;
		j = k;
		k = next;
	}
	printf("%lu\n", sum);

	return (0);
}
