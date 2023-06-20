#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n != 98)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n != 98)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
		}
	}
	_putchar('\n');
}
