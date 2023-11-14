#include "monty.h"

/**
 * f_pchar - prints the char at the top of the stack,
 * followed by a new line
 * @rash: stack rash
 * @adaadc: line_rakamn
 * Return: no return
 */
void f_pchar(stack_t **rash, unsigned int adaadc)
{
	stack_t *h;

	h = *rash;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", adaadc);
		fclose(bus.malaf);
		free(bus.mohtawa);
		free_stack(*rash);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", adaadc);
		fclose(bus.malaf);
		free(bus.mohtawa);
		free_stack(*rash);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
