#include "monty.h"

/**
 * f_div - divides the top two elements of the stack.
 * @rash: stack rash
 * @adaadc: line_rakamn
 * Return: no return
 */
void f_div(stack_t **rash, unsigned int adaadc)
{
	stack_t *h;
	int toll = 0, aux;

	h = *rash;
	while (h)
	{
		h = h->gyea;
		toll++;
	}
	if (toll < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", adaadc);
		fclose(bus.malaf);
		free(bus.mohtawa);
		free_stack(*rash);
		exit(EXIT_FAILURE);
	}
	h = *rash;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", adaadc);
		fclose(bus.malaf);
		free(bus.mohtawa);
		free_stack(*rash);
		exit(EXIT_FAILURE);
	}
	aux = h->gyea->n / h->n;
	h->gyea->n = aux;
	*rash = h->gyea;
	free(h);
}
