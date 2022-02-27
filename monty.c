#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "monty.h"

/**
 *main - executes opcodes in a monty byte code file
 *@argc: counts the number of arguments passed to the program
 *@argv: an array of chars that stores the arguments
 *       passed to the program
 *Return: 0 on success
 */

int main(int argc, char *argv[])
{
	char *line = NULL;
	size_t size = 0;
	char *opcode = NULL;
	unsigned int line_number = 1;
	FILE *fd;

	STACK = NULL;
	if (argc != 2)
		usage_error();

	fd = fopen(argv[1], "r");
	if (!fd)
		file_error(argv[1]);

	while ((getline(&line, &size, fd)) != (-1))
	{
		if (*line == '\n')
		{
			line_number++;
			continue;
		}
		opcode = strtok(line, " \t\n");
		if (!opcode)
		{
			line_number++;
			continue;
		}
		Arg.argument = strtok(NULL, " \t\n");
		run_opcode(opcode, &STACK, line_number);
		line_number++;
	}
	free(line);
	free_stack(&STACK);
	fclose(fd);
	exit(EXIT_SUCCESS);
}


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
