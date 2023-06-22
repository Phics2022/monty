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
	int fd, loop = 0;
	unsigned int line_num = 1;
	char buff[MAX] = " ", *com[MAX];

	if (argc != 2 || argv[1] == NULL)
	{
		write(2, "USAGE: monty file\n", 19);
		exit(EXIT_FAILURE);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	read(fd, buff, MAX);
	close(fd);
	com[loop] = strtok(buff, "\n");
	while (com[loop] != NULL)
	{
		loop++;
		com[loop] = strtok(NULL, "\n");
	}
	loop = 0;
	while (com[loop] != NULL)
	{
		test_cases(com[loop], line_num);
		line_num++;
		loop++;
	}
	return (0);
}
