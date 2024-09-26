#include "monty.h"
/**
 * validate_arguments - function checks the number of command-line arguments
 * @argc: The number of arguments
 */
void validate_arguments(int argc)
{
	if (argc == 2)
		return;

	dprintf(2, "Usage: monty file\n");
	exit(EXIT_FAILURE);
}
