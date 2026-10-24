#include <stdio.h>
#include <stdlib.h>

// insertion at end

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
    newnode->data = 40;
    newnode->next = NULL;
    third->next = newnode;

    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    free(head);
    free(second);
    free(third);
    free(newnode);

    return 0;
}