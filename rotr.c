#include "monty.h"

/**
  *rotr - rotates a stack_t list to bottom
  *@h: pointer to the head of the list
  *@line_number: the line on which we are
  *
  *Descr: The top element becomes the last, the last becomes the first
  */
void rotr(stack_t **h, unsigned int line_number)
{
	stack_t *ptr;

	(void)line_number;
	if (h != NULL && *h != NULL)
	{
		do {
			ptr = (*h)->next;
			(*h)->next = (*h)->prev;
			(*h)->prev = ptr;
			if (ptr != NULL)
			{
				*h = ptr;
			}
		} while (ptr != NULL);
	}
}
