#include "monty.h"
/**
 * rotr - function rotates the stack to the bottom
 * @stack: pointer to the stack
 * @line_number: line number where the rotr function is called
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp, *last;

	(void) stack;
	(void) line_number;

	if (arguments->stack_length < 2)
		return;

	tmp = arguments->head;
	while (tmp)
	{
		if (tmp->next == NULL)
		{
			last = tmp;
			break;
		}
		tmp = tmp->next;
	}
	last->prev->next = NULL;
	last->next = arguments->head;
	last->prev = NULL;

	arguments->head = last;
}
