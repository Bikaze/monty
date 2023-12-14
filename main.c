#include "monty.h"

input_t var = {NULL, NULL};

/**
 * main - Main function that calls other functions in the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings containing the arguments
 *
 * Return: 0 on success, non-zero on failure
 */
int main(int argc, char **argv)
{
	FILE *fp;
	char line[1024];
	int line_nbr = 0;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fp = fopen(argv[1], "r");

	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (fgets(line, 1024, fp))
	{
		line_nbr++;
		var.op = strtok(line, "\n\t\r ");
		if (var.op != NULL && var.op[0] != '#')
		{
			if (strcmp(var.op, "push") == 0)
				var.nbr = strtok(NULL, "\n\t\r ");
			interprete(&stack, line_nbr);
		}
	}
	if (stack != NULL)
		free_stack(stack);
	fclose(fp);
	return (0);
}
