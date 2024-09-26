#include "monty.h"

arg_t *arguments = NULL;

/**
 * main - function entry point
 * @argc: argument counter of number of arguments
 * @argv: argument vector storing the argument strings
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	size_t n = 0;

	validate_arguments(argc);
	initialize_arguments();
	get_stream(argv[1]);

	while (getline(&arguments->line, &n, arguments->stream) != -1)
	{
		arguments->line_number += 1;
		tokenize_line();
		get_instruction();
		run_instruction();
		free_tokens();
	}
	close_stream();
	free_arguments();

	return (0);
}
