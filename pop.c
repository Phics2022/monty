#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *pop - removes element at top
  *@head: head pointer
  *@line_num: line number
  *
  *Return: void
  */
void pop(stack_t **head, unsigned int line_num)
{
	stack_t *temp = *head;
	stack_t *temp2;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_num);
		exit(EXIT_FAILURE);
	}
	temp2 = temp->next;
	if (temp2 != NULL)
		temp2->prev = NULL;
	*head = temp2;
	free(temp);
}
