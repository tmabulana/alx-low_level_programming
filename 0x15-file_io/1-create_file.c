#include "main.h"
/**
 * create_file - to add the text to an already existing file
 * @filename: this is the name of the file that is to be
 * appended
 * @text_content: this is the content that is to be
 * appended to the file
 * Return: 1 will be returned on success
 * and -1 if not
 */
int create_file(const char *filename, char *text_content)
{
int fd;
int nletters;
int rwr;
if (!filename)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content)
{
for (nletters = 0; text_content[nletters]; nletters++)
	;
rwr = write(fd, text_content, nletters);
if (rwr == -1)
return (-1);
}
close(fd);
return (1);
}
