#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int info;
    struct node *next;
} node;

typedef struct {
    struct node *top;
} stack;

stack *makestack(void) {
    stack *s = (stack *)malloc(sizeof(stack));
    if (!s) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    s->top = NULL;
    return s;
}

void push(stack *s, int v) {
    node *n = (node *)malloc(sizeof(node));
    if (!n) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    n->info = v;
    n->next = s->top;
    s->top = n;
}

void pop(stack *s) {
    if (s->top == NULL) {
        printf("Stack is empty.\n");
        return;
    }
    node *temp = s->top;
    s->top = s->top->next;
    free(temp);
}

void printstack(stack *s) {
    node *t = s->top;
    while (t != NULL) {
        printf("%d -> ", t->info);
        t = t->next;
    }
    printf("NULL\n");
}

int main() {
    stack *s = makestack();
    int a, i, v;

    printf("Enter 5 values to push onto the stack:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a);
        push(s, a);
    }

    printf("Current stack: ");
    printstack(s);

    printf("Popping top element...\n");
    pop(s);
    printstack(s);

    printf("Pushing a new value: ");
    scanf("%d", &v);
    push(s, v);
    printstack(s);

    while (s->top != NULL) {
        pop(s);
    }
    free(s);

    return 0;
}
