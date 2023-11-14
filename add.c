#include "monty.h"

/**
 * f_add - adds the top two elements of the stack.
 * @rash: stack rash
 * @adaadc: line_rakamn
 * Return: no return
 */
void f_add(stack_t **rash, unsigned int adaadc)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", adaadc);
		fclose(bus.malaf);
		free(bus.mohtawa);
		free_stack(*rash);
		exit(EXIT_FAILURE);
	}
	h = *rash;
	aux = h->n + h->gyea->n;
	h->gyea->n = aux;
	*rash = h->gyea;
	free(h);
}
