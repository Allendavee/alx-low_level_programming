#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: The pointer to char to check
 * Return: lenth of string
 */
int _strlen(char *s)
{
	int lstr;

	lstr = 0;

	while (s[lstr] != '\0')
	{
		lstr++;
	}

	return (lstr);
}

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of the file
 * @text_content: string to append to the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	len = _strlen(text_content);

	bytes_written = write(fd, text_content, len);

	if (bytes_written != len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
