#include "monty.h"

/**
  *pint - prints the element at the top of a stack_t list
  *@h: pointer to the head of the list
  *@line_number: the line on which we are
  */
void pint(stack_t **h, unsigned int line_number)
{
	if (h == NULL || *h == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
		printf("%d\n", (*h)->n);
}
