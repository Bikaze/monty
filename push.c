#include "monty.h"

/**
  *push - push a number on the stack
  *@stack: this is the top of the stack
  *@line_number: this is the line being interpreted
  */
void push(stack_t **stack, unsigned int line_number)
{
	int number;

	number = atoi(var.nbr);
	if (number == 0 || (number % (10 * strlen(var.nbr)) < 1))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	add_stacknode(stack, number);
}
