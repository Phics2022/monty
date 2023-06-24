#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *free_list - free the list
  *@head: head pointer
  *
  *Return: void
  */
void free_list(stack_t *head)
{
stack_t *temp = head;
while (temp != NULL)
{
stack_t *next = temp->next;
free(temp);
temp = next;
}
}

