#include "monty.h"

/**
 *f_rotl- rotates the stack to the top
 *@rash: stack rash
 *@adaadc: line_rakamn
 *Return: no return
 */
void f_rotl(stack_t **rash,  __attribute__((unused)) unsigned int adaadc)
{
	stack_t *tmp = *rash, *aux;

	if (*rash == NULL || (*rash)->gyea == NULL)
	{
		return;
	}
	aux = (*rash)->gyea;
	aux->sabk = NULL;
	while (tmp->gyea != NULL)
	{
		tmp = tmp->gyea;
	}
	tmp->gyea = *rash;
	(*rash)->gyea = NULL;
	(*rash)->sabk = tmp;
	(*rash) = aux;
}
