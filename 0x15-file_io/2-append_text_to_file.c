#include "main.h"


/**
 * append_text_to_file -  function that appends text at the end of a file.
 * @filename:  the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: success 1 faillure -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int num_char = 0;
	int file;


	if (!filename)
		return (-1);

	if (!text_content)
	{
		return (0);
	}

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	while (text_content[num_char] != '\0')
	{
		num_char++;
	}
	if (write(file, text_content, num_char) == -1)
		return (-1);

	return (1);
}
