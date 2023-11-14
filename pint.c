#include "monty.h"

/**
 * f_pint - prints the top
 * @rash: stack rash
 * @adaadc: line_rakamn
 * Return: no return
 */
void f_pint(stack_t **rash, unsigned int adaadc)
{
	if (*rash == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", adaadc);
		fclose(bus.malaf);
		free(bus.mohtawa);
		free_stack(*rash);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*rash)->n);
}
