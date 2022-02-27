#include "monty.h"


/**
 *pint - prints the value at the top of the stack
 *@stack: the stack to print the top element of
 *@line_number: the line number where the particular
 *              opcode function is specified
 *
 *Return: void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
