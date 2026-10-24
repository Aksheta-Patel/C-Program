#include <stdio.h>
#include <stdlib.h>

// insertion in between

struct Node
{
    int data;
    struct Node *next;
};

int main(void)
{
    struct Node *head, *second, *third, *newnode, *temp;

    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = NULL;

    newnode = malloc(sizeof(struct Node));
    newnode->data = 25;
    newnode->next = second->next;
    second->next = newnode;

    // traversal
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    free(newnode);
    free(third);
    free(second);
    free(head);

    return 0;
}