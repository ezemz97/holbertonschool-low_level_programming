#include "holberton.h"
/**
  * append_text_to_file - read n bytes from file and write to stdout
  * @filename: file to read
  * @text_content: text to write
  * Return: 1 if succeeded or -1 if errors
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, text_size = 0, ret;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_size] != '\0')
			text_size++;
		ret = write(fd, text_content, text_size);
	}
	close(fd);
	if (ret == -1)
		return (-1);

	return (1);
}
