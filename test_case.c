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
	stack_t *temp;
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
	else
	{
		check_com(line, line_num, com, &instruct);
	}
}
