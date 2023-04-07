#include "main.h"

/**
 * create_file - Creates file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: pointer to string to write to the file.
 * Return: If the function fails - -1.
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, lengt = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lengt = 0; text_content[lengt];)
			lengt++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, lengt);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
