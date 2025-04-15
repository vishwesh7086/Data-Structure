#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int info;
    struct node *next;
} stack;

typedef struct {
    struct node *first;
} list;

list *makelist(void) {
    list *l = (list *)malloc(sizeof(list));
    l->first = NULL;
    return l;
}

void creatlist(list *l, int v) {
    node *n = (node *)malloc(sizeof(node));
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
    n->info = v;
    n->next = l->first;
    l->first = n;
}

void maddnode(list *l, int p, int v) {
    node *t = l->first;
    
    while (t != NULL && t->info != p) {
        t = t->next;
    }

    if (t != NULL) { 
        node *n = (node *)malloc(sizeof(node));
        n->info = v;
        n->next = t->next;
        t->next = n;
    } else {
        printf("Node with value %d not found.\n", p);
    }
}

void laddnode(list *l, int v) {
    node *n = (node *)malloc(sizeof(node));
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

void printlist(list *l) {
    node *t = l->first;
    while (t != NULL) {
        printf("%d -> ", t->info);
        t = t->next;
    }
    printf("NULL\n");
}

void dellist(list *l, int v) {
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
        printf("Value %d not found in the list.\n", v);
        return;
    }

    prev->next = t->next;
    free(t);
}

int main() {
    list *ls;
    int a, i, v, p;
    stack* ls;

    ls = makelist();

    printf("Enter values in list: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a);
        push(ls, a);
    }
    printlist(ls);

    printf("\nEnter first node value: ");
    scanf("%d", &v);
    firstnode(ls, v);
    printlist(ls);

    printf("\nEnter node in the middle:\nEnter previous node value: ");
    scanf("%d", &p);
    printf("Enter new node value: ");
    scanf("%d", &v);
    maddnode(ls, p, v);
    printlist(ls);

    printf("\nEnter last node value: ");
    scanf("%d", &v);
    laddnode(ls, v);
    printlist(ls);

    printf("\nEnter value to delete: ");
    scanf("%d", &v);
    dellist(ls, v);
    printlist(ls);

    return 0;
}
