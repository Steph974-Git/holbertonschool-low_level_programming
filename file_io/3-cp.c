#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * error_handler - handle error messages and exit
 * @code: exit code
 * @message: error message format
 * @arg: argument to insert in message
 * @fd_from: file descriptor for source file
 * @fd_to: file descriptor for destination file
 */
void error_handler(int code, char *message, char *arg, int fd_from, int fd_to)
{
if (fd_from > 0)
close(fd_from);
if (fd_to > 0)
close(fd_to);
dprintf(STDERR_FILENO, message, arg);
exit(code);
}

/**
 * close_files - close file descriptors
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * Return: 0 on success
 */
int close_files(int fd_from, int fd_to)
{
if (close(fd_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
exit(100);
}
if (close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
exit(100);
}
return (0);
}

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int fd_from = -1, fd_to = -1;
ssize_t bytes_read, bytes_written;
char buffer[1024];

if (argc != 3)
error_handler(97, "Usage: cp file_from file_to\n", NULL, -1, -1);

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
error_handler(98, "Error: Can't read from file %s\n", argv[1], -1, -1);

fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd_to == -1)
error_handler(99, "Error: Can't write to %s\n", argv[2], fd_from, -1);

while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
error_handler(99, "Error: Can't write to %s\n",
argv[2], fd_from, fd_to);
}

if (bytes_read == -1)
error_handler(98, "Error: Can't read from file %s\n",
argv[1], fd_from, fd_to);

return (close_files(fd_from, fd_to));
}
