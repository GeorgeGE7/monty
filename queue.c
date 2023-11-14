#include "monty.h"

/**
 * f_queue - prints the top
 * @rash: stack rash
 * @adaadc: line_rakamn
 * Return: no return
 */
void f_queue(stack_t **rash, unsigned int adaadc)
{
	(void)rash;
	(void)adaadc;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @rash: rash of the stack
 * Return: no return
 */
void addqueue(stack_t **rash, int n)
{
	stack_t *ala_dida, *aux;

	aux = *rash;
	ala_dida = malloc(sizeof(stack_t));
	if (ala_dida == NULL)
	{
		printf("Error\n");
	}
	ala_dida->n = n;
	ala_dida->gyea = NULL;
	if (aux)
	{
		while (aux->gyea)
			aux = aux->gyea;
	}
	if (!aux)
	{
		*rash = ala_dida;
		ala_dida->sabk = NULL;
	}
	else
	{
		aux->gyea = ala_dida;
		ala_dida->sabk = aux;
	}
}
