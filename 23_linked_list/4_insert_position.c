#include <stdio.h>
#include <stdlib.h>

// code to insert a node at a given position

struct Node
{
    int data;
    struct Node *next;
};

int main(void)
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *newnode;

    // allocate memory for nodes
    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));
    newnode = malloc(sizeof(struct Node));

    // store data and connect nodes
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 40;
    third->next = NULL;

    // insert node at position 3
    newnode->data = 30;
    newnode->next = third;
    second->next = newnode;

    // print the linked list
    struct Node *p = head;

    while(p != NULL)
    {
        printf("%d -> ", p->data);
        p = p->next;
    }

    printf("NULL\n");

    // free memory
    free(head);
    free(second);
    free(newnode);
    free(third);

    return 0;
}
