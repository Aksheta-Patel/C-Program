#include <stdio.h>
#include <stdlib.h>

// function to display the list in reverse order

struct Node
{
    int data;
    struct Node *next;
};

void display(struct Node *p)
{
    if(p == NULL)
        return;

    display(p->next);
    printf("%d -> ", p->data);
}

int main(void)
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    display(head);
    printf("NULL\n");

    free(head);
    free(second);
    free(third);

    return 0;
}