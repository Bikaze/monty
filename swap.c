#include "monty.h"

/**
  *swap - swaps the top two elements at the top of a stack_t list
  *@h: pointer to the head of the list
  *@line_number: the line on which we are
  */
void swap(stack_t **h, unsigned int line_number)
{
	if (h == NULL || *h == NULL || (*h)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		*h = (*h)->next;
		(*h)->prev->prev = *h;
		(*h)->prev->next = (*h)->next;
		(*h)->next->prev = (*h)->prev;
		(*h)->next = (*h)->prev;
		(*h)->prev = NULL;
	}
}
