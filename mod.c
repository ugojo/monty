#include "monty.h"

/**
 * modop - multiplies the top two elements and stores it in second element
 * @n_stack: pointer to the head node pointer of stack
 * @nline: the line number
 * Return: Nothing.
 */

void mod_op(stack_t **n_stack, unsigned int nline)
{
	stack_t *tmp;

	if (!(n_stack) || !(*n_stack)->next)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", nline);
		exit(EXIT_FAILURE);

	}

	if ((*n_stack)->n == 0)
	{
		fprintf(stderr, "l%d: division by zero\n", nline);
		exit(EXIT_FAILURE);
	}

	tmp = *n_stack;
	(*n_stack)->next->n %= (n_stack)->n;
	*n_stack = (*n_stack)->next;
	(*n_stack)->prev = NULL;
	free(tmp);
}
