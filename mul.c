#include "monty.h"
/**
 * mul - function multiplies the top two elements of the stack
 * @stack: pointer to the stack
 * @line_number: the line number where the function is called
 */
void mul(stack_t **stack, unsigned int line_number)
{
        stack_t *tmp1, *tmp2;

        (void) stack;
        if (arguments->stack_length < 2)
        {
                dprintf(2, "Line %d: cannot add, stack too short\n", line_number);
                free_all_args();
                exit(EXIT_FAILURE);
        }

        tmp1 = arguments->head;
        tmp2 = tmp1->next;

        tmp2->n = tmp1->n * tmp2->n;
        delete_stack_node();

        arguments->stack_length -= 1;
}
