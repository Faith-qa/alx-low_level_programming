#include "holberton.h"
/**
 *read_textfile - a function that reads the text of a file
 *@filename: first parameter
 *@letters: second parameter
 *
 *Description: programs that reads a file
 *Return: Number of Letters on success, -1 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, w, r; /** o -filedescriptor, w - file write, r -file readable*/
	FILE *temp;

	if (filename == NULL)
		return (0);
	temp = malloc(sizeof(char) * letters);

	if (temp == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, temp, letters);
	w = write(STDOUT_FILENO, temp, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(temp);
		return (0);
	}
	free(temp);
	close(o);

	return (w);

}
