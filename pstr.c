#include "monty.h"

/**
  *pstr - prints the characters of a stack_t list
  *@h: pointer to the head of the list
  *@line_number: the line on which we are
  */
void pstr(stack_t **h, unsigned int line_number)
{
	stack_t *ptr = *h;

	(void)line_number;
	while (ptr && ptr->n > 0 && ptr->n < 128)
	{
		printf("%c", ptr->n);
		ptr = ptr->next;
	}
	printf("\n");
}
