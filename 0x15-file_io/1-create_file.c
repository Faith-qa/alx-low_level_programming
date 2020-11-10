#include "holberton.h"
/**
 *create_file - function that creates a file
 *@filename: pointer to the new file to be created
 *@text_content: a pointer to a string to write to the file
 *Return: 1 if success else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fw; /** fd - file descriptor[open], fw- file write*/
	int i = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
		fw = write(fd, text_content, i);
	}
	if (fw == -1)
		return (-1);

	return (1);

}
