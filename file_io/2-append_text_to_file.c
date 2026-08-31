#include "main.h"
/**
* append_text_to_file - appendes text at the end of a file
* @filename: name of the file to append to
* @text_content: NULL terminated string to add to the end of the file
*
* Return: 1 on success, -1 on failure
*
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	ssize_t bytes_wr;

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL && len > 0)
	{
		bytes_wr = write(fd, text_content, len);
		if (bytes_wr == -1 || bytes_wr != len)
		{
			close(fd);
			return(-1);
		}
	}
	close(fd);
	return (1);

}
