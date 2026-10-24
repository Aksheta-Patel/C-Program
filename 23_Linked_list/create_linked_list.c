#include <stdio.h>
#include <stdlib.h>

// code to create a linked list

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

    // allocate memory for nodes
    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));

    // store data and connect nodes
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    // print the linked list
    printf("%d -> ", head->data);
    printf("%d -> ", second->data);
    printf("%d -> NULL\n", third->data);

    free(head);
    free(second);
    free(third);

    return 0;
}