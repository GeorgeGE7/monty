#include "monty.h"

/**
 * f_push - add node to the stack
 * @rash: stack rash
 * @adaadc: line_rakamn
 * Return: no return
 */
void f_push(stack_t **rash, unsigned int adaadc)
{
	int n, j = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", adaadc);
			fclose(bus.malaf);
			free(bus.mohtawa);
			free_stack(*rash);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", adaadc);
		fclose(bus.malaf);
		free(bus.mohtawa);
		free_stack(*rash);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(rash, n);
	else
		addqueue(rash, n);
}
