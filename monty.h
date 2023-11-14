#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @sabk: points to the sabkious element of the stack (or queue)
 * @gyea: points to the gyea element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *sabk;
	struct stack_s *gyea;
} stack_t;

/**
 * struct bus_s - variables -args, malaf, line mohtawa
 * @arg: value
 * @malaf: pointer to monty malaf
 * @mohtawa: line mohtawa
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *malaf;
	char *mohtawa;
	int lifi;
}  bus_t;

extern bus_t bus;

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
	void (*f)(stack_t **stack, unsigned int line_rakamn);
} instruction_t;

char *_realloc(char *ptr, unsigned int hgm_adim, unsigned int hgm_gdid);
ssize_t getstdin(char **khatrm, int malaf);
char  *clean_line(char *mohtawa);
void f_push(stack_t **rash, unsigned int rakamn);
void f_pall(stack_t **rash, unsigned int rakamn);
void f_pint(stack_t **rash, unsigned int rakamn);
int execute(char *mohtawa, stack_t **rash, unsigned int adaadc, FILE *malaf);
void free_stack(stack_t *rash);
void f_pop(stack_t **rash, unsigned int adaadc);
void f_swap(stack_t **rash, unsigned int adaadc);
void f_add(stack_t **rash, unsigned int adaadc);
void f_nop(stack_t **rash, unsigned int adaadc);
void f_sub(stack_t **rash, unsigned int adaadc);
void f_div(stack_t **rash, unsigned int adaadc);
void f_mul(stack_t **rash, unsigned int adaadc);
void f_mod(stack_t **rash, unsigned int adaadc);
void f_pchar(stack_t **rash, unsigned int adaadc);
void f_pstr(stack_t **rash, unsigned int adaadc);
void f_rotl(stack_t **rash, unsigned int adaadc);
void f_rotr(stack_t **rash, __attribute__((unused)) unsigned int adaadc);
void addnode(stack_t **rash, int n);
void addqueue(stack_t **rash, int n);
void f_queue(stack_t **rash, unsigned int adaadc);
void f_stack(stack_t **rash, unsigned int adaadc);

#endif
