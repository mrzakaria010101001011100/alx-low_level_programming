#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - that appends text of a file
 * @filename: variable pointer
 * @text_content: content file
 * Description: function that appends text at the end of a file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, ff;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[i] != '\0')
	{
		i++;
	}

	ff = open(filename, O_WRONLY | O_APPEND);

	if (ff == -1)
		return (-1);

	write(ff, text_content, i);

	return (1);
}

