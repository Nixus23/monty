#include "monty.h"
/**
 * pint - function prints the value at the top of the stack
 * @stack: pointer to the stack
 * @line_number: line number where the pint function is called
 */
void pint(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	if (arguments->head == NULL)
	{
		dprintf(2, "Line%d: cannot pint, stack empty\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	printf("%d\n", arguments->head->n);
}
