#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int info;
    struct node *next;
} node;

typedef struct {
    struct node *first;
} list;

list *makelist(void) {
    list *l = (list *)malloc(sizeof(list));
    if (!l) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    l->first = NULL;
    return l;
}

void creatlist(list *l, int v) {
    node *n = (node *)malloc(sizeof(node));
    if (!n) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    n->info = v;
    n->next = NULL;

    if (l->first == NULL) {
        l->first = n;
    } else {
        node *p = l->first;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = n;
    }
}

void firstnode(list *l, int v) {
    node *n = (node *)malloc(sizeof(node));
    if (!n) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    n->info = v;
    n->next = l->first;
    l->first = n;
}

void printlist(list *l) {
    node *t = l->first;
    while (t != NULL) {
        printf("%d -> ", t->info);
        t = t->next;
    }
    printf("NULL\n");
}

void dellist(list *l, int v) {
    if (l->first == NULL) {
        printf("List is empty.\n");
        return;
    }

    node *t = l->first, *prev = NULL;

    if (t != NULL && t->info == v) {
        l->first = t->next;
        free(t);
        return;
    }

    while (t != NULL && t->info != v) {
        prev = t;
        t = t->next;
    }

    if (t == NULL) {
        printf("Value not found in the list.\n");
        return;
    }

    prev->next = t->next;
    free(t);
}

int main() {
    list *ls = makelist();
    int a, i, v;

    printf("Enter 5 values for the list:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a);
        creatlist(ls, a);
    }

    printf("Current list: ");
    printlist(ls);

    printf("Enter a value to insert at the beginning: ");
    scanf("%d", &v);
    firstnode(ls, v);
    printlist(ls);

    printf("Enter a value to delete: ");
    scanf("%d", &v);
    dellist(ls, v);
    printlist(ls);

    node *temp;
    while (ls->first != NULL) {
        temp = ls->first;
        ls->first = ls->first->next;
        free(temp);
    }
    free(ls);

    return 0;
}
