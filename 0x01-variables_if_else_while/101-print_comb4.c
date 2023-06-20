#include
/**
 * main - Entry for project task 102
 * Return: 0 for success
 */
#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 for success
 */
int main(void)
{
    int num1, num2, num3;

    for (num1 = 0; num1 < 8; num1++)
    {
        for (num2 = num1 + 1; num2 < 9; num2++)
        {
            for (num3 = num2 + 1; num3 <= 9; num3++)
            {
                putchar(num1 + '0');
                putchar(num2 + '0');
                putchar(num3 + '0');

                if (!(num1 == 7 && num2 == 8 && num3 == 9))
				/* 789 this would be the maximum number possible without any repetition */
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    putchar('\n');
    return (0);
}
