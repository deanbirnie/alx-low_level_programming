#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 *
 * @filename: pointer to the name of the file to be read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print OR 0 if filename
 * is NULL or if the file can't be opened or read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t wr, opn, rd;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	opn = open(filename, O_RDONLY);
	if (opn == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	rd = read(opn, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);
	if (rd == -1 || wr == -1)
	{
		return (0);
	}

	close(opn);
	free(buffer);

	return (wr);
}
