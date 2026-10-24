#include <stdio.h>
#include <stdlib.h>

// code to count nodes in a circular linked list

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
    struct Node *p;
    int count = 0;

    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = head;

    p = head;

    do
    {
        count++;
        p = p->next;
    }
    while(p != head);

    printf("Total nodes = %d\n", count);

    free(head);
    free(second);
    free(third);

    return 0;
}