#include <stdio.h>
#include <stdlib.h>
// Data type declaration+definition
struct node {
    int data; struct node *link;
};
// Note: data types must be declared and defined before function prototypes are!

// Function prototype declarations
void push(struct node **s, int item);
int pop(struct node **s);


// Main function
int main() {
    struct node *top;  
    int t,i,item;
    top = NULL;
    
    push (&top, 45); push(&top, 28);
    push(&top, 63); push(&top, 55);

    item = pop(&top);
    printf("Popped: %d\n", item);
    item = pop(&top);
    printf("Popped: %d\n", item);
    return 0;
}

void push(struct node **s, int item) {      // Argument **s is the value at the address of the input, which we then find the value of that address. For 1st pass, top = NULL. *(*(&top)) --> *(NULL) = INVALID. (we don't actually deference **s so it's fine)
    struct node *q;     // new pointer to struct node declared/defined. I.e address to a struct node
    q = (struct node *)malloc(sizeof(struct node));     // new pointer to struct node intialised. address value q, is typecast to pointer to struct node, use mallac to find free 12 byte chunk in memory.
    q-> data = item;    // data field of q gets populated with argument (int) data
    q -> link = *s;     // link field of q gets populated with *s (i.e top).
    *s = q;     // top becomes pointer to current structure node. i.e top is populated with address of q
    // In effect, link gets populated with previous top, then increment by making q into top with, top = q
}

int pop (struct node **s) {     // Again, **s is a pointer to a pointer to s. First pass *(*(&top)) --> *(NULL) 
    int item;   // Define var item
    struct node *q;     // New pointer to struct node declared/defined. I.e address to a struct node
    if (*s == NULL)     // Essentially if top == NULL. Meaning stack is empty
        printf("Stack is empty");
    else {
        q = *s;     // address q = top
        item = q -> data;       // item variable set to data field of q
        *s = q -> link;     // top is set to link field of q. i.e new top is one lower down in the stack.
        free(q);        // free the malloc allocated space that this struct node occupied. I.e delete
        return (item);      // return item just returns the value in the data field so we can see it. Not super crucial to how stacks work, but just how this tutorial works, we end up printing the popped items.
    }
}
