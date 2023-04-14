#include "main.h"

/**
 * create_file - creates a file with specified text content
 *
 * @filename: the name of the file to be created
 * @text_content: Null terminated string to write to the file
 *
 * Return: 1 (success) or -1 (failure/filename == NULL)
 */
int create_file(const char *filename, char *text_content)
{
	int wr, opn, i = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[i])
		{
			i++;
		}
	}

	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(opn, text_content, i);

	if (opn == -1 || wr == -1)
	{
		return (-1);
	}

	close(opn);

	return (1);
}
