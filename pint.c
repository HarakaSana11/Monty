#include "monty.h"
<<<<<<< HEAD
/**
 * f_pint - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
=======

/**
 * pint - print element at the top of the stack
 * @stack: stack containing elements
 * @line_number: number of line
 */

void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *node;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		fclose(_close.file);
		free(_close.tmp);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	node = *stack;
	fprintf(stdout, "%d\n", node->n);
>>>>>>> 62ca17cc07f11883d375f28d2607bbecab2b5435
}
