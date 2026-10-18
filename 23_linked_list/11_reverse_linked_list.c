#include <stdio.h>
#include <stdlib.h>

// code to reverse a linked list

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
    struct Node *prev = NULL;
    struct Node *next;

    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    p = head;

    while(p != NULL)
    {
        next = p->next;
        p->next = prev;
        prev = p;
        p = next;
    }

    head = prev;

    p = head;
    while(p != NULL)
    {
        printf("%d -> ", p->data);
        p = p->next;
    }

    printf("NULL\n");

    free(third);
    free(second);
    free(head);

    return 0;
}