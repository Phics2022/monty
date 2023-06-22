#include "monty.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

void test_cases(char *com, int line_num)
{
	stack_t *head;
	char com_cpy[10];
	strcpy(com_cpy, com);
	char *line[MAX];
	int loop = 0;
	stack_t *temp;
	line[loop] = strtok(com_cpy, " ");
	while (line[loop] != NULL)
	{
		loop++;
		line[loop] = strtok(NULL, " ");
	}
	
	if (strcmp(line[0], "push") == 0)
	{
		temp = malloc(sizeof(stack_t));
		temp->n = atoi(line[1]);
		push(&temp,line_num);
	}
	else if (strcmp(line[0], "pall") == 0)
	{
		pall(&head, line_num);
	}
	else
	{
		dprintf(2, "L%d: unknown instruction %s\n", line_num, line[0]);
		exit(EXIT_FAILURE);
	}
}
