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
		pint_error(line_number);
	printf("%d\n", (*stack)->n);
}
