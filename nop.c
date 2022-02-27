#include "monty.h"

/**
 * nop -  does nothing
 * @stack: pointer to the stack
 * @line_number: line number in byte code file where this opcode is specified
 *
 * Return: void
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}
