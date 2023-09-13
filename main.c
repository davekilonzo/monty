#include <string.h>
#include "stack.h"

int main(void)
{
    stack_t *stack = NULL;
    char *opcode_push = "push";
    char *opcode_pall = "pall";
    char *token = "20";

    if (strcmp(opcode_push, "push") == 0)
        push(&stack, token);

    if (strcmp(opcode_pall, "pall") == 0)
        pall(&stack);

    return 0;
}

