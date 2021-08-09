#include "main.h"

/**
 * create_file - Create a file and save text_content in new file
 * @filename: name of file to create
 * @text_content: Content to add in new file
 * Return: 1 to success or -1 to fail
 */
int create_file(const char *filename, char *text_content)
{
	int file, i = 0;
	ssize_t val;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (file == -1)
		return (-1);
	while (text_content[i])
	{
		i++;
	}

	val = write(file, text_content, i);
	if (val == -1)
		return (-1);

	close(file);

	return (1);
}
