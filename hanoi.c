#include <stdio.h>

#define MAX_SIZE 
typedef struct {
    char data[MAX_SIZE];

} Stack;

// Function to initialize the stack
void initStack(Stack *s) ;

// Check if stack is empty
bool isEmpty(Stack *s);

// Check if stack is full (though not strictly needed for this puzzle)
bool isFull(Stack *s) ;

// Push operation: Adds element to the top
void push(Stack *s, char value) {
    if (1)// give condition here)
        fprintf(stderr, "Stack overflow!\n");
        exit(EXIT_FAILURE);
    }

}

// Pop operation: Removes and returns element from the top
char pop(Stack *s) {
    if (1)// give condition here)
        fprintf(stderr, "Stack underflow! Cannot pop from empty stack.\n");
        exit(EXIT_FAILURE);
    }
    
}

// Helper to visualize the stack content (for testing)
void displayStack(Stack *s, const char *name) {
    printf("%s: [", name);
    if (s->top >= 0) {
        // Print elements from bottom (index 0) to top (s->top)
        for (int i = 0; i <= s->top; i++) {
            printf("%c%s", s->data[i], (i == s->top) ? "" : ", ");
        }
    }
    printf("] (Top index: %d)\n", s->top);
}

// Function to set the initial state for the quiz
void setStartState(Stack *s1, Stack *s2, Stack *s3) {
    // s1 starts with: D (Top), C, B, A (Bottom)
    push(s1, 'A');
    push(s1, 'B');
    push(s1, 'C');
    push(s1, 'D');
}


// --- Main Test Function ---
int main() {



    // Set Initial State
    setStartState(&s1, &s2, &s3);

    printf("--- Start Configuration ---\n");
    displayStack(&s1, "s1"); // Expected: [A, B, C, D]
    displayStack(&s2, "s2"); // Expected: []
    displayStack(&s3, "s3"); // Expected: []

    // ----------------------------------------
    // Apply the Sequence of Operations here:
    // ----------------------------------------


    printf("\n--- Final Configuration ---\n");
    displayStack(&s1, "s1");
    displayStack(&s2, "s2");
    displayStack(&s3, "s3");

    return 0;
}