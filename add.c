#include "monty.h"

/**
  *add - add the top two elements at the top of a stack_t list
  *@h: pointer to the head of the list
  *@line_number: the line on which we are
  */
void add(stack_t **h, unsigned int line_number)
{
	stack_t *tmp;

	if (h == NULL || *h == NULL || (*h)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		(*h)->next->n = (*h)->n + (*h)->next->n;
		tmp = *h;
		*h = (*h)->next;
		if (*h != NULL)
			(*h)->prev = NULL;
		free(tmp);
	}
}
