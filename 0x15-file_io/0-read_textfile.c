#include "holberton.h"

/**
 * read_textfile - function to read file.
 *
 * @filename: file to read
 * @letters: size of characters
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t i = 0;
	int fd, fc;
	char buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	fc = read(fd, &buf, 1);
	if (fc == -1)
		return (0);

	while (fc != 0 && i != letters)
	{
		fc = write(STDOUT_FILENO, &buf, 1);
		if (fc == -1)
			return (0);
		fc = read(fd, &buf, 1);
		if (fc == -1)
			return (0);
		i++;
	}
	if (fc == 0)
		i++;

	close(fd);

	return (i);
}
