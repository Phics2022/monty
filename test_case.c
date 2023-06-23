#include "monty.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
/**
  *test_cases - check for each case
  *@com: command per line
  *@line_num: line number
  *
  *Return: void
  */
void test_cases(char *com, unsigned int line_num)
{
	stack_t *temp, *head;
	char *line[MAX];
	int loop = 0;
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
		line_err(line, line_num);
		temp = malloc(sizeof(stack_t));
		mal_err(temp);
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
	else if (strcmp(line[0], "pop") == 0)
	{
		instruct.f = pop;
		instruct.f(&head, line_num);
	}
	else if (strcmp(line[0], "swap") == 0)
	{
		instruct.f = swap;
		instruct.f(&head, line_num);
	}
	else if (strcmp(line[0], "add") == 0)
	{
		instruct.f = add;
		instruct.f(&head, line_num);
	}
	else if (strcmp(line[0], "nop") == 0)
	{
		return;
	}
	else if (strcmp(line[0], "\n") == 0)
	{
		;
	}
	else
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_num, com);
		exit(EXIT_FAILURE);
	}

}
