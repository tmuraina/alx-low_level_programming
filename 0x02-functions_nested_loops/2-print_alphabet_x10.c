#include "main.h"
/*
 * print_alphabet_x10 - prints the alphabets 10 times in lowercase
 * Description: This function prints the lowercase alphabets from 'a' to 'z'
 * ten times, each on a new line
 * Return: always 0
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
		_putchar('\n');
		num_of_times++;
	}
}
