#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define struct Node for the doubly linked list
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Global variable to keep track of the top of the stack
struct Node* top = NULL;

// Function to check if the stack is empty
bool isEmpty() {
    return top == NULL;
}

// Function to push an element onto the stack
void push(int d) {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    if (n == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    n->data = d;
    n->prev = NULL;
    n->next = top;
    if (!isEmpty()) {
        top->prev = n;
    }
    top = n;
}

// Function to print all the values on the stack
void pall() {
    struct Node* current = top;
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }
}

int main() {
    // Test the push and pall functions
    push(10);
    push(20);
    push(30);
    pall();  // Output: 30 20 10
    return 0;
}

