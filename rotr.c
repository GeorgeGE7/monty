#include "monty.h"

/**
 *f_rotr- rotates the stack to the bottom
 *@rash: stack rash
 *@adaadc: line_rakamn
 *Return: no return
 */
void f_rotr(stack_t **rash, __attribute__((unused)) unsigned int adaadc)
{
	stack_t *copy;

	copy = *rash;
	if (*rash == NULL || (*rash)->gyea == NULL)
	{
		return;
	}
	while (copy->gyea)
	{
		copy = copy->gyea;
	}
	copy->gyea = *rash;
	copy->sabk->gyea = NULL;
	copy->sabk = NULL;
	(*rash)->sabk = copy;
	(*rash) = copy;
}
