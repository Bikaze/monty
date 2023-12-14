#include "monty.h"

/**
  *add_stacknode_end - adds a new node at the end of stack_t list
  *@head: pointer to the head of the list
  *@n: number to add to the list
  *Return: return the address of the new node
  */
stack_t *add_stacknode_end(stack_t **head, const int n)
{
	stack_t *ptr;
	stack_t *h = *head;

	ptr = malloc(sizeof(stack_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
		ptr->prev = NULL;
		*head = ptr;
	}
	else
	{
		while (h->next)
		{
			h = h->next;
		}
		ptr->prev = h;
		h->next = ptr;
	}

	return (ptr);
}
