#include "main.h"
#include <fcntl.h>
#include <stddef.h>
#include <unistd.h>
/**
* append_text_to_file - Appends text at the end of a file.
* @filename: A pointer to the name of the file.
* @text_content: The string to add to the end of the file.
* Return: If the function fails or filename is NULL - -1.
* If the file does not exist the user lacks write permissions - -1.
* Otherwise - 1.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int open_file, w, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}

open_file = open(filename, O_WRONLY | O_APPEND);
w = write(open_file, text_content, len);

if (open_file == -1 || w == -1)
return (-1);

close(open_file);
return (1);
}


