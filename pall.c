#include <stdio.h>
#include "stack.h"

void pall(stack_t **stack)
{
    stack_t *current = *stack;

    while (current)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}

