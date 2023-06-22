#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <string.h>
#include "monty.h"
int main (int argc, char **argv)
{
	stack_t *head = NULL;
	int fd, loop = 0, loop2 = 0;
	unsigned int line_num = 1;
	char buff[MAX] = " ", *com[MAX];
	ssize_t rd_check;

	if (argc != 2 || argv[1] == NULL)
	{
		write(2, "USAGE: monty file\n", 19);
		exit(EXIT_FAILURE);
	}
	//read from a monty file
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	rd_check = read(fd, buff, MAX);
	close(fd);

	//strtok the buffer with '\n'
	com[loop] = strtok(buff,"\n");

	//put in a loop
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
