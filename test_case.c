#include "monty.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
void test_cases(char *com, int line_num)
{
	char com_cpy[10];
	strcpy(com_cpy, com);
	char *line[MAX];
	int loop = 0;
	line[loop] = strtok(com_cpy, " ");
	while (line[loop] != NULL)
	{
		printf("line: %s\n", line[loop]);
		loop++;
		line[loop] = strtok(NULL, " ");
	}
	if (strcmp(line[0], "push") == 0)
	{
		printf("push = %s\n", line[0]);
		printf("id = %d\n", atoi(line[1]));
	}
	else if (strcmp(line[0], "pall") == 0)
	{
		printf("pall = %s\n", line[0]);
	}
	else
	{
		dprintf(2, "L%d: unknown instruction %s\n", line_num, line[0]);
		exit(EXIT_FAILURE);
	}
}
