#include "monty.h"

/**
 *swap - swaps the top two elements on top of the stack
 *@stack: the stack to swap the element to
 *@line_number: the line number of the particulare opcode instruction
 *              in the monty byte code file
 *
 *Return: void
 */

void swap(stack_t **stack, unsigned int line_number)
{
	int count = 0;
	stack_t *temp;

	temp = *stack;
	for (; temp != NULL; temp = temp->next, count++)
		;
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	*stack = (*stack)->next;
	temp->next = (*stack)->next;
	temp->prev = *stack;
	(*stack)->next = temp;
	(*stack)->prev = NULL;
}
