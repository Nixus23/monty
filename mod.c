#include "monty.h"
/**
 * mod - function computes the rest of the division of the second top element by the top element
 * @stack: pointer to the stack
 * @line_number: line number where the mod function is called
 */
void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1, *tmp2;

	(void) stack;
	if (arguments->stack_length < 2)
	{
		dprintf(2, "Line %d: cannot mod, stack too short\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	tmp1 = arguments->head;
	tmp2 = tmp1->next;

	if (tmp1->n == 0)
	{
		dprintf(2, "Line %d: division by zero\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	tmp2->n = tmp2->n % tmp1->n;
	delete_stack_node();

	arguments->stack_length -= 1;
}
