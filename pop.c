#include "monty.h"
<<<<<<< HEAD
/**
 * f_pop - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
=======

/**
 * pop - remove element top of the stack
 * @stack: stack containing elements
 * @line_number: number of lines
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		fclose(_close.file);
		free(_close.tmp);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	*stack = current->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(current);
>>>>>>> 62ca17cc07f11883d375f28d2607bbecab2b5435
}
