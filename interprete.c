#include "monty.h"

/**
 * interprete - map opcodes to respective functions
  *@stack: stack of pushed numbers
  *@line_number: number at which we are
  *
  *Description: this is the center of the program maps opcodes to functions
  */
void interprete(stack_t **stack, unsigned int line_number)
{
	int i = 0;

	instruction_t opcode_list[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", divide},
		{"mul", mul},
		{"mod", mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{NULL, NULL}
	};
	while (opcode_list[i].opcode != NULL)
	{
		if (strcmp(var.op, opcode_list[i].opcode) == 0)
		{
			opcode_list[i].f(stack, line_number);
			return;
		}
		i++;
	}

	fprintf(stderr, "L%d: unknown instruction %s", line_number, var.op);
	exit(EXIT_FAILURE);
}
