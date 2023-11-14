#include "monty.h"

/**
 * f_pop - prints the top
 * @rash: stack rash
 * @adaadc: line_rakamn
 * Return: no return
 */
void f_pop(stack_t **rash, unsigned int adaadc)
{
	stack_t *h;

	if (*rash == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", adaadc);
		fclose(bus.malaf);
		free(bus.mohtawa);
		free_stack(*rash);
		exit(EXIT_FAILURE);
	}
	h = *rash;
	*rash = h->gyea;
	free(h);
}
