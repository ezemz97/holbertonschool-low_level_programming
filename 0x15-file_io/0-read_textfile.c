#include "holberton.h"
/**
  * read_textfile - read n bytes from file and write to stdout
  * @filename: file to read
  * @letters: bytes to read and print
  * Return: number of bytes writed or 0 if it fails
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count;
	unsigned int ret;
	/* Allocate memory for the total of bytes to print */
	char *bytes = malloc(sizeof(char) * letters);

	if (bytes == NULL)
	{
		free(bytes);
		return (0);
	}

	if (filename == NULL)
		return (0);
	/* open a file descriptor to the input file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	/* read n bytes (letters) from buffer (filename) and return bytes readed */
	count = read(fd, bytes, letters);
	if (bytes == 0)
		return (0);
	bytes[count + 1] = '\0';
	/* write n letters (count) to stdout (bytes=size of memory) */
	ret = write(STDOUT_FILENO, bytes, count);
	close(fd);
	free(bytes);

	return (ret);
}
