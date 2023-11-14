#include "monty.h"

/**
 *f_sub- sustration
 *@rash: stack rash
 *@adaadc: line_rakamn
 *Return: no return
 */
void f_sub(stack_t **rash, unsigned int adaadc)
{
	stack_t *aux;
	int sus, alaes;

	aux = *rash;
	for (alaes = 0; aux != NULL; alaes++)
		aux = aux->gyea;
	if (alaes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", adaadc);
		fclose(bus.malaf);
		free(bus.mohtawa);
		free_stack(*rash);
		exit(EXIT_FAILURE);
	}
	aux = *rash;
	sus = aux->gyea->n - aux->n;
	aux->gyea->n = sus;
	*rash = aux->gyea;
	free(aux);
}
