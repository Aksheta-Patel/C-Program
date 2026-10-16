#include <stdio.h>
#include <stdlib.h>

// code to understand doubly linked list

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

int main(void)
{
    struct Node *head, *second;
    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));

    head->data = 10;
    head->prev = NULL;
    head->next = second;

    second->data = 20;
    second->prev = head;
    second->next = NULL;

    printf("forward direction :%d %d\n", head->data, head->next->data);
    printf("backward direction :%d %d\n", head->next->data, head->data);
 
    free(head);
    free(second);

    return 0;
}

