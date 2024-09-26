#include "monty.h"

void getting_stream_failed(char *fileName);

/**
 * get_stream - function gets the stream for reading from the file
 * @fileName: name of the file to open and set as the stream
 */
void get_stream(char *fileName)
{
	int fd;

	fd = open(fileName, O_RDONLY);
	if (fd == -1)
		getting_stream_failed(fileName);

	arguments->stream = fdopen(fd, "r");
	if (arguments->stream == NULL)
	{
		close(fd);
		getting_stream_failed(fileName);
	}
}


/**
 * getting_stream_failed - function handles the error when reading a file fails
 * @fileName: name of the file
 */
void getting_stream_failed(char *fileName)
{
	dprintf(2, "Error: can't open file %s\n", fileName);
	free_arguments();
	exit(EXIT_FAILURE);
}
