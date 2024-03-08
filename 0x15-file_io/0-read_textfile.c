#include "main.h"
/**
 * read_textfile - function that reads a text file and printd it to the screen
 * @filename: pointer to the file
 * @letters: number of character to be printed
 * Return: Always 0 (success)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int rep_file;
	ssize_t byte_return, byte_number;
	char *buffer;

	buffer = (char *)malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	rep_file = open(filename, O_RDWR);
	if (rep_file == -1)
	{
		return (0);
	}
	byte_return = read(rep_file, buffer, letters);
	if (byte_return > 0)
	{
		byte_number = write(STDOUT_FILENO, buffer, byte_return);
		if (byte_number == -1)
		{
			return (0);
		}
	}
	else
	{
		return (0);
	}
	if (byte_return != byte_number)
	{
		return (0);
	}
	free(buffer);
	close(rep_file);
	return (byte_number);
}
