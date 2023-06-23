#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 * @n_stack: pointer to the head node pointer of stack
 * @nline: the line number
 * Return: Nothing.
 */

void swap(stack **n_stack, unsigned int nline)
{
	int tmp;

	if (n_stack == NULL || *n_stack == NULL || !((*n_stack)->next))
	{
		fprintf(stderr, "L%d: can't swap,stack too short\n", nliine);
		exit(EXIT_FAILURE);

	}

	tmp = (*n_stack)->n;
	(*n_stack)->n = (*n_stack)->next->n;
	(*n_stack)->next->n = tmp;
}
