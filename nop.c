#include "monty.h"
/**
 * nop - do nothing
 * @stack: pointer to the top of the stack
 * @line_number: the line number of the command interepted
 *
 * Return: void
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
	(void) stack;
}
