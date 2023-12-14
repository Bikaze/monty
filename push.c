#include "monty.h"

/**
  *push - push a number on the stack
  *@stack: this is the top of the stack
  *@line_number: this is the line being interpreted
  */
void push(stack_t **stack, unsigned int line_number)
{
	int number;

	if (check_nbr(var.nbr))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	number = atoi(var.nbr);

	if (strcmp(var.mode, "queue") == 0)
	{
		add_stacknode_end(stack, number);
	}
	else if(strcmp(var.mode, "stack") == 0)
	{
		add_stacknode(stack, number);
	}

}
