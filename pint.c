#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *pint - print the head
  *@head: head pointer
  *@line_num: line number
  *
  *Return: void
  */
void pint(stack_t **head, unsigned int line_num)
{
	stack_t *temp = *head;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", temp->n);
}
