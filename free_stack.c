#include "monty.h"
/**
  *free_stack - free a stack_t list
  *@head: pointer to the head of the list
  *Return: nothing
  */
void free_stack(stack_t *head)
{
	stack_t *ptr = head;

	while (ptr)
	{
		head = ptr;
		ptr = ptr->next;
		free(head);
	}
}
