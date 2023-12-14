#include "monty.h"

/**
  *pop - removes the element at the top of a stack_t list
  *@h: pointer to the head of the list
  *@line_number: the line on which we are
  */
void pop(stack_t **h, unsigned int line_number)
{
	stack_t *tmp;

	if (h == NULL || *h == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		tmp = *h;
		*h = (*h)->next;
		if (*h != NULL)
			(*h)->prev = NULL;
		free(tmp);
	}
}
