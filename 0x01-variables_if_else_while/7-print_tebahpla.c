#include <stdio.h>
/**
 * main - Entry for program 6
 * Return: 0 for success
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}

