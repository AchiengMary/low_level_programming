# include "main.h"

/**
 * ssize_t read_textfile -  reads a text file
 * prints it to the POSIX standard output
 *
 * @filename: file to be read
 * @letters: content of the file
 *
 * Return: number of letters
 */

ssize_t _putchar(char c)
{
	return write(STDOUT_FILENO, &c, 1);
}

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return 0;
	}
	
	int fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return 0;
	}
	
	char *buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return 0;
	}
	
	ssize_t bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return 0;
	}
	
	ssize_t bytes_written = 0;
	ssize_t total_bytes_written = 0;
	while (bytes_written < bytes_read)
	{
		bytes_written = _putchar(buffer[total_bytes_written]);
		if (bytes_written == -1)
		{
			free(buffer);
			close(fd);
			return 0;
		}
		total_bytes_written += bytes_written;
	}
	
	free(buffer);
	close(fd);
	
	return total_bytes_written;
}
