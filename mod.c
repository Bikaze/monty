#include "monty.h"

/**
  *mod - give the remainder of the division of the
  *second top element of a stack_t list by the first one
  *@h: pointer to the head of the list
  *@line_number: the line on which we are
  */
void mod(stack_t **h, unsigned int line_number)
{
	stack_t *tmp;

	if (h == NULL || *h == NULL || (*h)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*h)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		(*h)->next->n = (*h)->next->n / (*h)->n;
		tmp = *h;
		*h = (*h)->next;
		if (*h != NULL)
			(*h)->prev = NULL;
		free(tmp);
	}
}
