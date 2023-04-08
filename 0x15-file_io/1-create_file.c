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
 * create_file - creates a file with the specified name and writes the
 * provided text content to it
 *
 * @filename: the name of the file to create
 * @text_content: a NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, ret;
	size_t len_of_text;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		return (-1);

	len_of_text = _strlen(text_content);
	ret = write(fd, text_content, len_of_text);

	if (ret == -1 (size_t) ret != len_of_text)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
