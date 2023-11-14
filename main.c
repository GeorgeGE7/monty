#include "monty.h"

bus_t bus = {NULL, NULL, NULL, 0};

/**
 * main - monty code interpreter
 * @argc: rakamn of arguments
 * @argv: monty malaf location
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *mohtawa;
	FILE *malaf;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int adaadc = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty malaf\n");
		exit(EXIT_FAILURE);
	}
	malaf = fopen(argv[1], "r");
	bus.malaf = malaf;
	if (!malaf)
	{
		fprintf(stderr, "Error: Can't open malaf %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		mohtawa = NULL;
		read_line = getline(&mohtawa, &size, malaf);
		bus.mohtawa = mohtawa;
		adaadc++;
		if (read_line > 0)
		{
			execute(mohtawa, &stack, adaadc, malaf);
		}
		free(mohtawa);
	}
	free_stack(stack);
	fclose(malaf);
	return (0);
}
