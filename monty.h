#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#include <stdio.h>

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct arg_s
{
	int arg;
	int flag;
} arg_t;

extern arg_t arg;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
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
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **n_stack, unsigned int line_number);
} instruction_t;

/**
 * struct line - contents of line and corresponding number
 * @contents: array of tokens read from the line
 * @number: the line number
 *
 * Description: contents of a line and corresponding number
 */
typedef struct line
{
	unsigned int number;
	char **content;
} line_t;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct meta_s
{
	char *buf;
	stack_t *n_stack;
	FILE *file;
} meta_t;

/* Important functions */
void (*get_op_func(line_t line, meta_t *meta))(stack_t **, unsigned int);
int _isalpha(int c);

/* Parse functions */
void parsefile(FILE *file);
void parseline(line_t *line, char *buffer);


/* Verification functions */
bool chk_com(line_t line);
void push_chk(line_t line, meta_t *meta, char *opcode);

/* Stack manipulation functions */
void push(stack_t **n_stack, unsigned int nline);
void pall(stack_t **n_stack, unsigned int nline);
void pint(stack_t **n_stack, unsigned int nline);
void pop(stack_t **n_stack, unsigned int nline);
void swap(stack_t **n_stack, unsigned int nline);
void nop(stack_t **n_stack, unsigned int nline);

void nop(stack_t **n_stack, unsigned int nline);


void sub_op(stack_t **n_stack, unsigned int nline);
void add_op(stack_t **n_stack, unsigned int nline);
void div_op(stack_t **n_stack, unsigned int nline);
void mul_op(stack_t **n_stack, unsigned int nline);
void mod_op(stack_t **n_stack, unsigned int nline);

#endif /* MONTY_H */
