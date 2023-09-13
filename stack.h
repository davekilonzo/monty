#ifndef STACK_H
#define STACK_H

typedef struct stack_s
{
    int n;
    struct stack_s *next;
} stack_t;

void push(stack_t **stack, char *number_str);
void pall(stack_t **stack);

#endif /* STACK_H */

