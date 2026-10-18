#include <stdio.h>
#include <stdlib.h>

// code to search for an element

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
    int count = 1;

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
        if(p->data == 20)
        {
            printf("Element found at position %d\n", count);
            break;
        }

        count++;
        p = p->next;
    }

    if(p == NULL)
        printf("Element not found\n");

    free(head);
    free(second);
    free(third);

    return 0;
}