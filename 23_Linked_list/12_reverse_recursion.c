#include <stdio.h>
#include <stdlib.h>

// function to reverse the linked list

struct Node
{
    int data;
    struct Node *next;
};

struct Node *reverse(struct Node *head)
{
    struct Node *p;

    if (head == NULL || head->next == NULL)
        return head;

    p = reverse(head->next);

    head->next->next = head;
    head->next = NULL;

    return p;
}

int main(void)
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *p;
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

    head = reverse(head);

    p = head;

    while (p != NULL)
    {
        printf("%d -> ", p->data);
        p = p->next;
    }

    printf("NULL\n");

    // free memory
    p = head;

    while (p != NULL)
    {
        next = p->next;
        free(p);
        p = next;
    }

    return 0;
}