#include <unistd.h>
#include <string.h>
#include <errno.h>
/**
 * main - Entry for project 101
 * Return: 1
 */
int main(void)
{
	char *me = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = strlen(me);
	ssize_t by_length = write(STDERR_FILENO, me, len);

	if (by_length != len)
	{
		write(STDERR_FILENO, "Write error\n", strlen("Write error\n"));
		return (1);
	}
	return (1);
}
