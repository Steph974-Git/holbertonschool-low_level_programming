#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * handle_close - Gère la fermeture sécurisée d'un descripteur de fichier
 * @fd: Le descripteur de fichier à fermer
 */
void handle_close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * validate_args - Vérifie les arguments et initialise les fichiers
 * @argc: Nombre d'arguments
 * @argv: Tableau des arguments
 * @fd_from: Pointeur vers le descripteur du fichier source
 * @fd_to: Pointeur vers le descripteur du fichier destination
 */
void validate_args(int argc, char *argv[], int *fd_from, int *fd_to)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	*fd_from = open(argv[1], O_RDONLY);
	if (*fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	*fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (*fd_to == -1)
	{
		close(*fd_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Programme qui copie le contenu d'un fichier vers un autre
 * @argc: Nombre d'arguments
 * @argv: Tableau des arguments
 *
 * Return: 0 en cas de succès
 */
int main(int argc, char *argv[])
{
	int source_fd = -1, dest_fd = -1;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	validate_args(argc, argv, &source_fd, &dest_fd);

	while ((bytes_read = read(source_fd, buffer, 1024)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(source_fd);
			close(dest_fd);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(source_fd);
		close(dest_fd);
		exit(98);
	}

	handle_close(source_fd);
	handle_close(dest_fd);
	return (0);
}
