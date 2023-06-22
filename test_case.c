#include "monty.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

void test_cases(char *com, unsigned int line_num)
{
	stack_t *head;
	char *line[MAX];
	int loop = 0;
	stack_t *temp;
	instruction_t instruct;
	instruct.opcode = com;
	line[loop] = strtok(instruct.opcode, " ");
	while (line[loop] != NULL)
	{
		loop++;
		line[loop] = strtok(NULL, " ");
	}
	
	if (strcmp(line[0], "push") == 0)
	{
		temp = malloc(sizeof(stack_t));
		temp->n = atoi(line[1]);
		instruct.f = push;
		instruct.f(&temp, line_num);
	}
	else if (strcmp(line[0], "pall") == 0)
	{
		instruct.f = pall;
		instruct.f(&head, line_num);
	}
	else if (strcmp(line[0], "pint") == 0)
	{
		instruct.f = pint;
		instruct.f(&head, line_num);
	}
	else
	{
		dprintf(2, "L%d: unknown instruction %s\n", line_num, line[0]);
		exit(EXIT_FAILURE);
	}
}
