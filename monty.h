#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
  *struct input_t - opcode and in the case of push also the number to push
  *@op: the opcode
  *@nbr: nbr to push in the case of pus opcode
  *
  *Description: opcode in the read string
  */
typedef struct input_t
{
	char *op;
	char *nbr;
} input_t;

extern input_t var;

void interprete(stack_t **stack, unsigned int line_number);
stack_t *add_stacknode(stack_t **head, const int n);
void free_stack(stack_t *head);
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **h, unsigned int line_number);
void pint(stack_t **h, unsigned int line_number);
int check_nbr(char *str);
#endif
