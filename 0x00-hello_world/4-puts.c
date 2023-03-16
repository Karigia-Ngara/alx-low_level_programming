#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
   putchar *str = "Programming is like building a multilingual puzzle\n";
    size_t len = strlen(str);
    ssize_t bytes_written = write(STDOUT_FILENO, str, len);

    if (bytes_written == -1 || (size_t) bytes_written != len)
        return (1);

    return (0);
}

