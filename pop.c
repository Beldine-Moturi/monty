#include "monty.h"

/**
 *pop - removes the top element of the stack
 *@stack: pointer to the stack to remove element from
 *@line_number: the line number where this particular
 *              opcode is specified
 *
 *Return: void
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	temp = (*stack)->next;
	if ((*stack)->next != NULL)
		(*stack)->next->prev = NULL;
	free(*stack);
	*stack = temp;
}
