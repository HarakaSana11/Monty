#include "monty.h"
<<<<<<< HEAD
/**
 * f_swap - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
=======

/**
 * swap - swap the top two elements of the stack
 * @stack: stack containing elements
 * @line_number: line number
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1;
	int new = 0;

	if (*stack == NULL || ((*stack)->prev == NULL && (*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		fclose(_close.file);
		free(_close.tmp);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	tmp1 = *stack;
	new = (*stack)->n;
	tmp1->n = (*stack)->next->n;
	(*stack)->next->n = new;
>>>>>>> 62ca17cc07f11883d375f28d2607bbecab2b5435
}
