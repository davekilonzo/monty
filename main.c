#include <stdio.h>
#include <string.h>
#include "stack.h"
#include "instructions.h"

int main(void)
{
    stack_t *stack = NULL;
    char *opcode = "push";
    char *token = "10";

    if (strcmp(opcode, "push") == 0)
        push(&stack, 1);
    else if (strcmp(opcode, "pall") == 0)
        pall(&stack, 2);

    return 0;
}
