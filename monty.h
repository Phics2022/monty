#ifndef MONTY_H
#define MONTY_H
#define MAX 2000
/**
* struct stack_s - doubly linked list representation of a stack (or queue)
* @n: integer
* @prev: points to the previous element of the stack (or queue)
* @next: points to the next element of the stack (or queue)
*
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO
*/
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
extern stack_t *head;

/**
* struct instruction_s - opcode and its function
* @opcode: the opcode
* @f: function to handle the opcode
*
* Description: opcode and its function
* for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void test_cases(char *com, unsigned int line_num);
void pall(stack_t **head, unsigned int line_num);
void push(stack_t **temp, unsigned int line_num);
void pint(stack_t **head, unsigned int line_num);
void line_err(char *line[], unsigned int line_num);
void mal_err(stack_t *temp);
void pop(stack_t **head, unsigned int line_num);
void swap(stack_t **head, unsigned int line_num);
void add(stack_t **head, unsigned int line_num);
void nop(stack_t **head, unsigned int line_num);
void free_list(stack_t *head);
#endif
