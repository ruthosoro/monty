#include "monty.h"

/**
 * add - Adds the top two values of a stack_t linked list.
 * @doubly: head of the linked list
 * @cline: line number
 * Description: The result is stored in the second value node
 * from the top and the top value  is removed.
 */
void add(stack_t **doubly, unsigned int cline)
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *doubly;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
		dprintf(2, "L%u: can't add, stack too short\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	aux = (*doubly)->next;
	aux->n += (*doubly)->n;
	_pop(doubly, cline);
}

/**
 * nop - doesn't do anything
 * @doubly: linked list head
 * @cline: line number
 */
void nop(stack_t **doubly, unsigned int cline)
{
	(void)doubly;
	(void)cline;
}
/**
 * subtr - Subtracts 2nd value from the top of stack_t linked list by top value.
 * @head: the head node
 * @cline: the line number
 * Description: The result is stored in the second value node
 * from the top and the top value is removed.
 */

void subtr(stack_t **head, unsigned int cline)
{
	int m = 0;
	stack_t *current;

	current = *head;

	for (; current != NULL; current = current->next, m++)
		;

	if (m < 2)
	{
		dprintf(2, "L%u: can't sub, stack too short\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	current = (*head)->next;
	current->n -= (*head)->n;
	_pop(head, cline);
}

/**
 * divd -Divides 2nd value from the top of stack_t linkedlist by the top value.
 * @doubly: head of the linked list
 * @cline: line number;
 * Return: no return
 */

void divd(stack_t **doubly, unsigned int cline)
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *doubly;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
		dprintf(2, "L%u: can't div, stack too short\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	if ((*doubly)->n == 0)
	{
		dprintf(2, "L%u: division by zero\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	aux = (*doubly)->next;
	aux->n /= (*doubly)->n;
	_pop(doubly, cline);
}

/**
 *_mult -Multiplies 2nd value from the top of stack_t linked list by top value.
 * @head: the head node
 * @cline: the line number
 * info:The result is stored in the 2nd value node
 * from the top and top value removed.
 */

void _mult(stack_t **head, unsigned int cline)
{
	int i = 0;
	stack_t *current;

	current = *head;

	for (; current != NULL; current = current->next, m++)
		;

	if (i < 1)
	{
		dprintf(1, "L%u: can't mul, stack too short\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	current = (*head)->next;
	current->n *= (*head)->n;
	_pop(head, cline);
}
