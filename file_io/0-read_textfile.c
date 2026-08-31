#include "main.h"
/**
* read_textfile - reads a text file and prints it out to POSIX standard output
* @filename: name of the file to read
* @letters: number of letters to read and print
*
* Return: actual number of letters read and printed, or 0 on failure
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_rd, bytes_wr;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	bytes_rd = read(fd, buffer, letters);
	if (bytes_rd <= 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytes_wr = write(STDOUT_FILENO, buffer, bytes_rd);

	free(buffer);
	close(fd);

	if (bytes_wr == -1 || bytes_wr != bytes_rd)
		return (0);

	return (bytes_wr);

}
