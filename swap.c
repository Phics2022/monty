#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *swap - swaps the top two elements
  *@head: head pointer
  *@line_num: line number
  *
  *Return: void
  */
void swap(stack_t **head, unsigned int line_num)
{
	stack_t *temp = *head;
	stack_t *temp2;
	int i = 0, y, z;

	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	temp2 = temp->next;
	y = temp->n;
	z = temp2->n;
	temp->n = z;
	temp2->n = y;
}
