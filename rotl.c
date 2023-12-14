#include "monty.h"

/**
  *rotl - rotates a stack_t list to the top
  *@h: pointer to the head of the list
  *@line_number: the line on which we are
  *
  *Descr: The top element becomes the last, the second top becomes first
  */
void rotl(stack_t **h, unsigned int line_number)
{
	stack_t *hold = *h;
	stack_t *ptr;

	(void)line_number;
	if (h != NULL && *h != NULL && (*h)->next != NULL)
	{
		*h = (*h)->next;
		(*h)->prev = NULL;

		(void)line_number;
		ptr = *h;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = hold;
		hold->prev = ptr;
		hold->next = NULL;
	}
}
