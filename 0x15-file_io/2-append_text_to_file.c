#include "main.h"
/**
 * append_text_to_file - function that append text to the end of a file
 * @filename: name of the file
 * @text_content: pointer to the char value of the parameter
 * Return: Always 0 (success)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int rep_file;
	ssize_t byte_return;

	if (filename == NULL)
	{
		return (-1);
	}
	rep_file = open(filename, O_WRONLY | O_APPEND);
	if (rep_file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		byte_return = write(rep_file, text_content, strlen(text_content));
		if (byte_return == -1)
		{
			close(rep_file);
			return (-1);
		}
	}
	close(rep_file);
	return (1);
}
