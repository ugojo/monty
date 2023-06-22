#include "monty.h"

/**
 * pall - prints the data of all nodes in stack
 * @n_stack: pointer to the head node pointer of stack
 * @nline: the line number
 *
 * Return: Nothing.
 */
void pall(stack_t **n_stack, unsigned int nline)
{
	stack_t *tmp;
	(void)nline;

	tmp = *n_stack;
	while (tmp)
	{
		print("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
