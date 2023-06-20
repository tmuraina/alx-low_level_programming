#include <stdio.h>
#include "main.h"

/**
 * compute_sum - computes the sum of multiples of 3 or 5 below 1024
 * Return: the sum of the multiples
 */

int compute_sum(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	return (sum);
}
