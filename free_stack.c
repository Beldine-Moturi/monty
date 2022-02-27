#include "monty.h"

/**
 *free_stack - frees a stack
 *@stack: a pointer to the stack to free
 *
 *Return: void
 */

void free_stack(stack_t **stack)
{
	stack_t *temp;

	if (stack == NULL || *stack == NULL)
		return;
	while (*stack != NULL)
	{
		temp = *stack;
		*stack = temp->next;
		free(temp);
	}
}
