#include "monty.h"

/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @rash: stack rash
 * @adaadc: line_rakamn
 * Return: no return
 */
void f_pstr(stack_t **rash, unsigned int adaadc)
{
	stack_t *h;
	(void)adaadc;

	h = *rash;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->gyea;
	}
	printf("\n");
}
