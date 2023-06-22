#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *pall - print stack
  *@head: head pointer
  *@line_num: line number
  *
  *Return: void
  */
void pall(stack_t **head, unsigned int line_num)
{
	stack_t *temp = *head;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
