#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * error_exit - handles error messages and exits
 * @code: exit code
 * @message: error message format
 * @arg: argument for message
 */
void error_exit(int code, char *message, char *arg)
{
dprintf(STDERR_FILENO, message, arg);
exit(code);
}

/**
 * close_fd - safely closes a file descriptor
 * @fd: file descriptor to close
 */
void close_fd(int fd)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * read_and_write - reads from source and writes to destination
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @buffer: buffer for reading/writing
 * @argv: program arguments
 * Return: 0 on success
 */
int read_and_write(int fd_from, int fd_to, char *buffer, char *argv[])
{
ssize_t bytes_read, bytes_written;

bytes_read = read(fd_from, buffer, 1024);
if (bytes_read == -1)
{
close(fd_from);
if (fd_to != -1)
close(fd_to);
error_exit(98, "Error: Can't read from file %s\n", argv[1]);
}
if (bytes_read > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read)
{
close(fd_from);
close(fd_to);
error_exit(99, "Error: Can't write to %s\n", argv[2]);
}
return (1);
}
return (0);
}

/**
 * copy_file - copies content from source to destination
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @argv: program arguments
 */
void copy_file(int fd_from, int fd_to, char *argv[])
{
char buffer[1024];
int more_to_read = 1;

while (more_to_read)
more_to_read = read_and_write(fd_from, fd_to, buffer, argv);
}

/**
 * main - entry point for cp program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to;

if (argc != 3)
error_exit(97, "Usage: cp file_from file_to\n", NULL);

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
error_exit(98, "Error: Can't read from file %s\n", argv[1]);

fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd_to == -1)
{
close(fd_from);
error_exit(99, "Error: Can't write to %s\n", argv[2]);
}

copy_file(fd_from, fd_to, argv);

close_fd(fd_from);
close_fd(fd_to);
return (0);
}
