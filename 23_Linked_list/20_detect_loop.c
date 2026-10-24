#include <stdio.h>
#include <stdlib.h>

// code to detect a loop in a linked list

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
    struct Node *q;

    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = second;  // creates a loop

    p = head;
    q = head;

    while(q != NULL && q->next != NULL)
    {
        p = p->next;
        q = q->next->next;

        if(p == q)
        {
            printf("Loop detected\n");
            break;
        }
    }

    // break the loop before freeing memory
    third->next = NULL;

    free(head);
    free(second);
    free(third);

    return 0;
}