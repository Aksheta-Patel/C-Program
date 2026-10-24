#include <stdio.h>
#include <stdlib.h>

// code to delete a node by value

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

int main(void)
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *p;

    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));

    head->data = 10;
    head->prev = NULL;
    head->next = second;

    second->data = 20;
    second->prev = head;
    second->next = third;

    third->data = 30;
    third->prev = second;
    third->next = NULL;

    // delete the node containing 20
    head->next = third;
    third->prev = head;
    free(second);

    p = head;

    while(p != NULL)
    {
        printf("%d <-> ", p->data);
        p = p->next;
    }

    printf("NULL\n");

    free(head);
    free(third);

    return 0;
}