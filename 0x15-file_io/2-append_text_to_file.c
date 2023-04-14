#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 *
 * @filename: the name of the file to be appended to
 * @text_content: the text to be appended to the end of the file
 *
 * Return: 1 (success) or -1 (failure/filename == NULL)
 */
int append_text_to_file(const char *filename, char *text_content)
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

	opn = open(filename, O_WRONLY | O_APPEND);
	wr = write(opn, text_content, i);
	if (opn == -1 || wr == -1)
	{
		return (-1);
	}

	close(opn);

	return (1);
}
