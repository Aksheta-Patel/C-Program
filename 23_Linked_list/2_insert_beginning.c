#include <stdio.h>
#include <stdlib.h>

// code to insert a node at the beginning

struct Node
{
    int data;
    struct Node *next;
};

int main(void)
{
    struct Node *head;
    struct Node *second;
    struct Node *newnode;

    // allocate memory for nodes
    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    newnode = malloc(sizeof(struct Node));

    // store data and connect nodes
    head->data = 20;
    head->next = second;

    second->data = 30;
    second->next = NULL;

    // insert node at the beginning
    newnode->data = 10;
    newnode->next = head;
    head = newnode;

    // print the linked list
    struct Node *p = head;

    while(p != NULL)
    {
        printf("%d -> ", p->data);
        p = p->next;
    }

    printf("NULL\n");

    // free memory
    free(second);
    free(head->next);
    free(head);
    return 0;
}
