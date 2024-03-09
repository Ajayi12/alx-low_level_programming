#include "main.h"
/**
 * rep_file2 - function that read from a file
 * @str: pointer to the file name
 * @file2: file descriptor value of the parameter
 * Return: Always 0 (success)
 */
ssize_t rep_file2(const char *str, int file2)
{
	int rep_file2;
	static char buffer[1024];
	ssize_t byte_return, byte_write;

	rep_file2 = open(str, O_RDONLY);
	if (rep_file2 == -1)
	{
		dprintf(1, "Error: Can't read from file %s\n", str);
		exit(98);
	}
	while ((byte_return = read(rep_file2, buffer, sizeof(buffer))) > 0)
	{
		byte_write = write(file2, buffer, byte_return);
	}
	if (byte_return == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", str);
		close(rep_file2);
		exit(98);
	}
	if (close(rep_file2) == -1)
	{
		dprintf(2, "can't close fd");
		exit(100);
	}
	return (byte_write);
}
/**
 * main - function that copy from one file to another
 * @ac: interger value of the parameter
 * @av: pointer to pointer char value of the parameter
 * Return: Always 0 (success)
 */
int main(int ac, char **av)
{
	int rep_file;
	ssize_t byte_write;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	rep_file = open(av[2], O_WRONLY | O_CREAT | O_EXCL, S_IRUSR | S_IWUSR |
			S_IRGRP | S_IWGRP | S_IROTH);
	if (rep_file == -1)
	{
		rep_file = open(av[2], O_WRONLY | O_TRUNC);
		if (rep_file == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	byte_write = rep_file2(av[1], rep_file);
	if (byte_write == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		close(rep_file);
		exit(99);
	}
	if (close(rep_file) == -1)
	{
		dprintf(2, "can't close fd");
		exit(100);
	}
	return (0);
}
