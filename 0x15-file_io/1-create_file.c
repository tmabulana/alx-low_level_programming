#include "main.h"
/**
 * create_file - the file to be created and written
 * @filename: this is the filename that is to be created
 * @text_content: this is the content that will be copied
 * into the file
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
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);
if (text_content == NULL)
text_content = "";
for (nletters = 0; text_content[nletters]; nletters++)
	;
rwr = write(fd, text_content, nletters);
if (rwr == -1)
return (-1);
close(fd);
return (1);
}
