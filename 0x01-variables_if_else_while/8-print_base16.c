#include <stdio.h>
/**
 * main - Entry for program 8
 * Return: 0 for success
 */
int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
			putchar('0' + num);
		else
			putchar('a' + (num - 10));
	}
	putchar('\n');
	return (0);
}

