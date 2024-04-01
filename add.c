#include "monty.h"
<<<<<<< HEAD
/**
 * f_add - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_add(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
=======

/**
 * add - add the top two elements of the stack
 * @stack: stack containing elements
 * @line_number: line number
 */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1;
	int sum = 0;

	if (*stack == NULL || ((*stack)->prev == NULL && (*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		free_stack(*stack);
		fclose(_close.file);
		free(_close.tmp);
		exit(EXIT_FAILURE);
	}
	tmp1 = *stack;
	sum = tmp1->n + tmp1->next->n;
	tmp1->next->n = sum;
	*stack = tmp1->next;
	free(tmp1);
>>>>>>> 62ca17cc07f11883d375f28d2607bbecab2b5435
}
