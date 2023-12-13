#include "monty.h"

/**
  *add_stacknode - adds a new node at the beginning of stack_t list
  *@head: pointer to the head of the list
  *@n: number to add to the list
  *Return: return the address of the new node
  */
stack_t *add_stacknode(stack_t **head, const int n)
{
	stack_t *ptr;

	ptr = malloc(sizeof(stack_t));
	if (ptr == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = *head;
	if (*head != NULL)
		(*head)->prev = ptr;
	*head = ptr;
	return (ptr);
}
