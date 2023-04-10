#include "main.h"
/** read_textfile - reads a text file and printd it to POSIX ...
 * @filename: pointer to the name of the file to read
 * @letters: number of letters to read and print
 *
 * return: actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_chars, write_chars;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	read_chars = read(fd, buf, letters);
	if (read_chars == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	write_chars = write(STDOUT_FILENO, buf, read_chars);
	if (write_chars == -1 || write_chars != read_chars)
	{
		close(fd);
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);
	return (read_cars);
}
