#include "main.h"
/**
 * create_file - creates a file
 * @filename: file to be created
 * @text_content: Null terminated string to be written to the file
 * Return: -1 on failure 1 on success
 */

int create_file(conts char *filename, char *text_content)
{
	int fd, nlet, rwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (nlet = 0; text_content[nlet]; nlet++)
		;
	nwr = write(fd, text_content, nlet);
	if(rwr == -1)
		return (-1);
	close(fd);
	return (1);
}
