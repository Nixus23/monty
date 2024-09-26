#include "monty.h"

void free_head(void);
void free_stack(stack_t *head);
/**
 * free_arguments - free memory allocated to the arguments pointer
 */
void free_arguments()
{
	if (arguments == NULL)
		return;

	if (arguments->instruction)
	{
		free(arguments->instruction);
		arguments->instruction = NULL;
	}

	free_head();

	if (arguments->line)
	{
		free(arguments->line);
		arguments->line = NULL;
	}

	free(arguments);
}

/**
 * free_head - function frees the memory allocted to the head and sets it to NULL
 */
void free_head(void)
{
	if (arguments->head)
		free_stack(arguments->head);

	arguments->head = NULL;
}

/**
 * free_stack - free the nodes in a stack list
 * @head: first node of a different link
 */
void free_stack(stack_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
	{
		free_stack(head->next);
	}
	free(head);
}
