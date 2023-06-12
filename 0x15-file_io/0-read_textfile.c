#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
* read_textfile- Read text file print to STDOUT.
* @filename: text file being read
* @letters: number of letters to be read
* Return:  actual number of bytes read and printed
* 0 when function fails or filename is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fdescriptor;
ssize_t write_file;
ssize_t read_file;

fdescriptor = open(filename, O_RDONLY);
if (fdescriptor == -1)
return (0);

buf = malloc(sizeof(char) * letters);
read_file = read(fdescriptor, buf, letters);
write_file = write(STDOUT_FILENO, buf, read_file);

free(buf);
close(fdescriptor);
return (write_file);
}

