#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

void push (stack_t **temp, int line_num)
{
	if (*head == NULL)
	{
		(*temp)->next = NULL; 
		(*temp)->prev = NULL; 
		*head = temp;
	}
	else
	{
		(*temp)->next = *head;
		(*temp)->prev = NULL;
		*head = *temp;
	}
}
