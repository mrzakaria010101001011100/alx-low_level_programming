#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - function for creates a new file.
 * @filename: variable pointer.
 * @text_content: content file
 * Description: first Create a function that creates a file.
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
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

	ff = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (ff == -1)
		return (-1);

	write(ff, text_content, i);

	return (1);
}

