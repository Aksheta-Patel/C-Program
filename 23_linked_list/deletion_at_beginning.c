#include <stdio.h>
#include <stdlib.h>

// deletion at beginning

struct Node
{
    int data;
    struct Node *next;
};

int main(void)
{
    struct Node *head, *second, *third, *newnode;
    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = NULL;

    newnode = head;
    head = head->next;
    free(newnode);
    newnode = head;
    while (newnode != NULL)
    {
        printf("%d ", newnode->data);
        newnode = newnode->next;
    }
    free(second);
    free(third);
    return 0;
}