#include "holberton.h"
/**
  * create_file - read n bytes from file and write to stdout
  * @filename: file to read
  * @text_content: text to write
  * Return: 1 if succeeded or -1 if errors
  */
int create_file(const char *filename, char *text_content)
{
	int fd, text_size = 0, ret;

	while (text_content[text_size] != '\0')
		text_size++;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		ret = write(fd, text_content, text_size);
		if (ret == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
