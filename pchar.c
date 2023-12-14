#include "monty.h"

/**
  *pchar - prints the char at the top of a stack_t list
  *@h: pointer to the head of the list
  *@line_number: the line on which we are
  */
void pchar(stack_t **h, unsigned int line_number)
{
	if (h == NULL || *h == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*h)->n < 0 || (*h)->n > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*h)->n);
}
