#include "monty.h"

/**
 * f_mul - multiplies the top two elements of the stack.
 * @rash: stack rash
 * @adaadc: line_rakamn
 * Return: no return
 */
void f_mul(stack_t **rash, unsigned int adaadc)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", adaadc);
		fclose(bus.malaf);
		free(bus.mohtawa);
		free_stack(*rash);
		exit(EXIT_FAILURE);
	}
	h = *rash;
	aux = h->gyea->n * h->n;
	h->gyea->n = aux;
	*rash = h->gyea;
	free(h);
}
