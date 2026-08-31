#include "main.h"
/**
* main - copies the content of a file to another file
* @argc: the number of arguments passed to the program
* @argv: an array fo pointers to the arguments
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_rd, bytes_wr;
	char buffer[1024];

	if (ac != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);

	f_from = open(av[1], O_RDONLY);
	if (f_from == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);

	f_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f_to == -1)
		dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((r = read(f_from, buf, 1024)) > 0)
	{
		w = write(f_to, buf, r);
		if (w == -1 || w != r)
			dprintf(2, "Erro: Can't write to %s\n", av[2]), exit(99);
	}
	if (r == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);

	if (close(f_from) == -1)
		dprintf(2, "Error: Can't close fd %d\n", f_from), exit(100);
	if (close(f_to) == -1)
		dprintf(2, "Error: Can't close fd %d\n", f_to), exit(100);
	return (0);
}
