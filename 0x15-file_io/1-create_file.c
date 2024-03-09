#include "main.h"
/**
 * create_file - function that create file
 * @filename: name of the file to be created
 * @text_content: text to written inside the file
 * Return: Always 0 (success)
 */
int create_file(const char *filename, char *text_content)
{
	int rep_file;

	if (filename == NULL)
	{
		return (1);
	}
	rep_file = open(filename, O_RDWR | O_CREAT | O_EXCL, S_IWUSR | S_IRUSR);
	if (rep_file == -1)
	{
		rep_file = open(filename, O_RDWR | O_TRUNC);
		if (rep_file == -1)
		{
			return (-1);
		}
	}
	if (text_content != NULL)
	{
		write(rep_file, text_content, strlen(text_content));
	}
	close(rep_file);
	return (1);
}
