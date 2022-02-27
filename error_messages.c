#include "monty.h"

/**
 *file_error - prints an error message and exits
 * @file: the name of the file
 *
 *Description: prints an error message if fopen(file) fails
 *
 *Return: void
 */
void file_error(char *file)
{
	fprintf(stderr, "Error: Can't open file %s\n", file);
	exit(EXIT_FAILURE);
}


/**
 *usage_error - prints an error message and exits
 *
 *Description: prints an error message if user does not give any file
 *             or if they give more than one file argument
 *Return: void
 */
void usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}


/**
 *push_error - prints an error message then exits
 *@line_number: the line number in the byte code file where
 *              the push opcode is specified
 *Description: prints an error message when push there is no
 *             argument given to push or when a non-integer is given
 *Return: void
 */
void push_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: usage: push integer\n", line_number);
	exit(EXIT_FAILURE);
}


/**
 *pint_error - prints an error message then exits
 *@line_number: the line number in the byte code file where
 *              the pint opcode is specified
 *Description: prints an error message when push there is no
 *             argument given to push or when a non-integer is given
 *Return: void
 */
void pint_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: usage: can't pint, stack empty\n", line_number);
	exit(EXIT_FAILURE);
}


/**
 *pop_error - prints an error message then exits
 *@line_number: the line number in the byte code file where
 *              the pop opcode is specified
 *Description: prints an error message when push there is no
 *             argument given to push or when a non-integer is given
 *Return: void
 */
void pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
	exit(EXIT_FAILURE);
}
