#include "monty.h"

/**
 * addnode - add node to the rash stack
 * @rash: rash of the stack
 * @n: new_value
 * Return: no return
 */
void addnode(stack_t **rash, int n)
{

	stack_t *ala_dida, *aux;

	aux = *rash;
	ala_dida = malloc(sizeof(stack_t));
	if (ala_dida == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->sabk = ala_dida;
	ala_dida->n = n;
	ala_dida->gyea = *rash;
	ala_dida->sabk = NULL;
	*rash = ala_dida;
}
