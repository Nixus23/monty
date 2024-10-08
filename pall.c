#include "monty.h"
/**
 * pall - prints all the elements in a stack
 * @stack: pointer to the stack
 * @line_number: line number where the pall function is called
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (arguments->head == NULL)
		return;

	(void) line_number;
	(void) stack;

	tmp = arguments->head;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
