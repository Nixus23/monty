#include "monty.h"
/**
 * pchar - function prints the char at the top of the stack
 * @stack: pointer to the stack
 * @line_number: line number where the function is called
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1;

	(void) stack;
	if (arguments->head == NULL)
	{
		dprintf(2, "line %d: cannot pchar, stack empty", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	tmp1 = arguments->head;

	if (tmp1->n < 0 || tmp1->n > 127)
	{
		dprintf(2, "Line %d: cannot pchar, value out of range\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}
	printf("%c\n", tmp1->n);
}
