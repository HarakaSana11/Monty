#include "monty.h"
<<<<<<< HEAD
/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
=======

/**
 * pall- prints all the values on the stack
 * @stack: stack to fill
 * @line_number: line number
 */

void pall(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
	stack_t *node;

	if (*stack == NULL)
		return;
	node = *stack;
	while (node != NULL)
	{
		fprintf(stdout, "%d\n", node->n);
		node = node->next;
>>>>>>> 62ca17cc07f11883d375f28d2607bbecab2b5435
	}
}
