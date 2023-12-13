#include "monty.h"

/**
  *pall - prints all the elements of a stack_t list
  *@h: pointer to the head of the list
  *@line_number: the line on which we are
  *Return: nothing
  */
void pall(stack_t **h, unsigned int line_number)
{
	stack_t *ptr;
	(void)line_number;

	ptr = *h;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
}
