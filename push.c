#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *push - push to beginning of stack
  *@temp: stact_t holder sha
  *@line_num: line number
  *
  *Return: void
  */
void push(stack_t **temp, __attribute((unused)) unsigned int line_num)
{
	static stack_t *head;

	if (head == NULL)
	{
		(*temp)->next = NULL;
		(*temp)->prev = NULL;
		head = *temp;
	}
	else
	{
		(*temp)->next = head;
		(*temp)->prev = NULL;
		head = *temp;
	}
}
