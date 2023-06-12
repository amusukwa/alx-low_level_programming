#include <fcntl.h>
#include <unistd.h>

/**
* create_file - Creates a file.
* @filename: Pointer to the name of the file to create
* @text_content: A pointer to a string to write to the file.
* Return: If the function fails - -1.
* Otherwise - 1.
*/


int create_file(const char *filename, char *text_content)
{
int file_d, w, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}

file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(file_d, text_content, len);

if (file_d == -1 || w == -1)
return (-1);
close(file_d);
return (1);
}
