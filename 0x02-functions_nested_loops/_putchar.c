#include "main.h"
#include <unistd.h>

/**
 * _putchar - writees c to the output
 * @c: the character
 * Return: 1 for success, -1 otherwise
 */

int _putchar(char c)
{
    return (write(1, &c, 1));
}

