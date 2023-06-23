#include "monty.h"
arg_t arg = {0, 0};
/**
 * addop - adds the top two elements together
 * @n_stack: pointer to the head node pointer of stack
 * @nline: the line number
 * Return: Nothing.
 */

void addcode(stack **n_stack, unsigned int nline)
{
	stack_t  *tmp;

	if (!(*n_stack) || !(*n_stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", nline);
		exit(EXIT_FAILURE);
	}

	tmp = *n_stack;
	(*n_stack)->next->n += (*n_stack)->n;
	*n_stack = (*n_stack)->next;
	(*n_stack)->prev  = NULL;
	free(tmp);
}
