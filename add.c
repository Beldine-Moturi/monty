#include "monty.h"

/**
 *add - adds the top two elements of a stack
 *@stack: pointer to the stack
 *@line_number: the line_number in the monty byte code file where this
 *              particular opcode is specified
 *
 *Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	int count = 0;
	int sum;
	stack_t *temp = *stack;

	for (; temp != NULL; temp = temp->next, count++)
		;
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->next;
	sum = (*stack)->n + temp->n;
	temp->n = sum;
	pop(stack, line_number);
}
