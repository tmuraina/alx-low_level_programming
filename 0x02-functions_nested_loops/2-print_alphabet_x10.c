#include "main.h"
/*
 * main - task 2
 * Return - 0 for success
 */

void print_alphabet_x10(void)
{
	char letter;
	int num_of_times;

	for (num_of_times = 0; num_of_times < 10; num_of_times++)
	{
		letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
	}
	_putchar('\n')
}
