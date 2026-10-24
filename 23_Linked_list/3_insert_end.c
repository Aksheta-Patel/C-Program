#include <stdio.h>
#include <stdlib.h>

// code to insert a node at the end

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
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = NULL;

    // insert node at the end
    newnode->data = 30;
    newnode->next = NULL;
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
    free(newnode);
    free(second);
    free(head);

    return 0;
}
