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
	 int fd;
	 char buf[468];

	 fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		printf("Failed to open and read the file.\n");
		exit(1);
	}

	read(fd, buf, letters);
	buf[letters] = '\0';

	close(fd);

	printf("%s\n", buf);
	return (letters);
}
