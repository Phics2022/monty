#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

void pall(stack_t **head, int line_num)
{
	stack_t *temp = *head;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
