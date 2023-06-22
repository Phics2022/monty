#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *add - add the first two element
  *@head: head pointer
  *@line_num: line number
  *
  *Return: void
  */
void add(stack_t **head, unsigned int line_num)
{
	stack_t *temp = *head;
	stack_t *temp2;
	int count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	temp2 = temp->next;
	temp2->n = temp2->n + temp->n;
	temp2->prev = NULL;
	*head = temp2;
	free(temp);
}
