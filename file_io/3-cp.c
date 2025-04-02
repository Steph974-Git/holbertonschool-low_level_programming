#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>

/**
 *  _strcmp  - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: difference between strings
 */
int _strcmp(char *s1, char *s2)
{
    while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
    {
        s1++;
        s2++;
    }

    return (*s1 - *s2);
}

/**
 * error_exit - prints error message with string arg and exits
 * @code: exit code
 * @message: error message format
 * @arg: string argument to insert in message
 */
void error_exit(int code, char *message, char *arg)
{
    dprintf(STDERR_FILENO, message, arg);
    exit(code);
}

/**
 * error_exit_int - prints error message with int arg and exits
 * @code: exit code
 * @message: error message format
 * @arg: integer argument to insert in message
 */
void error_exit_int(int code, char *message, int arg)
{
    dprintf(STDERR_FILENO, message, arg);
    exit(code);
}

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to;
    ssize_t bytes_read, bytes_written;
    char buffer[1024];

    if (argc != 3)
        error_exit(97, "Usage: cp file_from file_to\n", NULL);

    if (_strcmp(argv[1], argv[2]) == 0)
        error_exit(99, "Error: Can't write to %s\n", argv[2]);

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
        error_exit(98, "Error: Can't read from file %s\n", argv[1]);

    fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        close(fd_from);
        error_exit(99, "Error: Can't write to %s\n", argv[2]);
    }

    while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
    {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1 || bytes_written != bytes_read)
        {
            close(fd_from);
            close(fd_to);
            error_exit(99, "Error: Can't write to %s\n", argv[2]);
        }
    }

    if (bytes_read == -1)
    {
        close(fd_from);
        close(fd_to);
        error_exit(98, "Error: Can't read from file %s\n", argv[1]);
    }

    if (close(fd_from) == -1)
        error_exit_int(100, "Error: Can't close fd %d\n", fd_from);

    if (close(fd_to) == -1)
        error_exit_int(100, "Error: Can't close fd %d\n", fd_to);

    return (0);
}
