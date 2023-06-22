#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include "monty.h"
#include <stdlib.h>
#include <ctype.h>
/**
  *line_err - check for push err
  *@line: the line
  *@line_num: the line number
  *
  *Return: void
  */
void line_err(char *line[], unsigned int line_num)
{
	if (line[1] == NULL || !atoi(line[1]))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_num);
		exit(EXIT_FAILURE);
	}
}

/**
  *mal_err - check for malloc error
  *@temp: temp
  *
  *Return: void
  */
void mal_err(stack_t *temp)
{
	if (temp == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
}
