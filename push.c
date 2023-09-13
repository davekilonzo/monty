#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void push(stack_t **stack, char *number_str)
{
    int number;
    stack_t *new_node;

    number = atoi(number_str);
    if (number == 0 && number_str[0] != '0')
    {
        fprintf(stderr, "L<line_number>: usage: push integer\n");
        exit(EXIT_FAILURE);
    }

    new_node = malloc(sizeof(stack_t));
    if (!new_node)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = number;
    new_node->next = *stack;
    *stack = new_node;
}

