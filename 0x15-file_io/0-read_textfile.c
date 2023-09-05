#include "main.h"


/**
 * read_textfile - reads a text file and prints it 
 * to the POSIX standard output.
 * @letters:  number of letters it should read and print
 * @filename: The name of the file
 * Return:number of letters int else 0
 */
ssize_t read_textfile(const char *filename, size_t letters);
{
	if (filename == NULL)
		return (0);

	ssize_t file;
	ssize_t let;
	ssize_t words;
	char *content;

	content = malloc(sizeof(char) * content);

	if (content == NULL)
		return (0);

	file = open(filename(content, O_RDONLY));

	if (file == -1)
	{
		free(content);
		return (0);
	}

	letters = read(file, content, letters);
	words = write(STDOUT_FILENO, content, let);

	close(file);
	
	
	return (words);
}
