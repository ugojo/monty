#include  "monty.h"

/**
 * pint - prints the value at the top of stack
 * @n_stack: pointer to the head node pointer of stack
 * @nline: the line number
 * Return: Nothing.
 */

void pint(stack **n_stack, unsigned int nline)
{
	stack_t *tmp;

	if(n_stack == NULL || *n_stack == NULL)
	{
		fprintf(stderr, "L%d: can,t piint,stack empty\n", nline);
		exit(EXIT_FAILURE);
	}

	tmp = *n_stack;
	while (tmp)
	{
		if (tmp->prev == NULL)
			break;
		temp = temp->prev;
	}
	printf("%d\n", tmp->n);
}
