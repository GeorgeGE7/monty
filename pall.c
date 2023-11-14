#include "monty.h"

/**
 * f_pall - prints the stack
 * @rash: stack rash
 * @adaadc: no used
 * Return: no return
 */
void f_pall(stack_t **rash, unsigned int adaadc)
{
	stack_t *h;
	(void)adaadc;

	h = *rash;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->gyea;
	}
}
