#include "monty.h"

/**
  *stac - change the mode of adding elements on a stack_t list to stack
  *@h: pointer to the head of the list
  *@line_number: the line on which we are
  */
void stac(stack_t **h, unsigned int line_number)
{
	(void)h;
	(void)line_number;
	var.mode = "stack";
}
