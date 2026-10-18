#include <stdio.h>
#include <stdlib.h>

// code to sort a linked list

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
    int t;

    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));

    head->data = 30;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 20;
    third->next = NULL;

    for(int i = 0; i < 2; i++)
    {
        p = head;

        while(p->next != NULL)
        {
            if(p->data > p->next->data)
            {
                t = p->data;
                p->data = p->next->data;
                p->next->data = t;
            }

            p = p->next;
        }
    }

    p = head;

    while(p != NULL)
    {
        printf("%d -> ", p->data);
        p = p->next;
    }

    printf("NULL\n");

    free(head);
    free(second);
    free(third);

    return 0;
}