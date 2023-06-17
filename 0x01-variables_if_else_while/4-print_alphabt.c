#include <stdio.h>
/**
 * main - Entry for program 4
 * Return: 0 for success
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);
	}
	putchar('\n');
	return (0);
}

