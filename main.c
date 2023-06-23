#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <string.h>
#include "monty.h"
/**
  *main - main function
  *@argc: argument count
  *@argv: vector
  *
  *Return: 0
  */
int main(int argc, char **argv)
{
	__attribute__((unused)) stack_t *head = NULL;
	FILE *fd;
	int loop = 0;
	unsigned int line_num = 1;
	char *com[MAX], temp[100];

	if (argc != 2 || argv[1] == NULL)
	{
		write(2, "USAGE: monty file\n", 19);
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r");
	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (fgets(temp, 100, fd) != NULL)
	{
		com[loop] = temp;
		test_cases(com[loop], line_num);
		line_num++;
		loop++;
	}
	fclose(fd);
	return (0);
}
