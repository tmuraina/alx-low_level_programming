#include <stdio.h>
/**
 * main - Entry for program 9
 * Return: 0 for success
 */
int main(void)
{
	int hexa;

	for (hexa = 0; hexa < 10; hexa++)
	{
		putchar(hexa + '0');
		if (hexa != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
