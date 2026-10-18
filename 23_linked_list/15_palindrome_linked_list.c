#include <stdio.h>
#include <stdlib.h>

// code to check palindrome

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

    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 10;
    third->next = NULL;

    if(head->data == third->data)
        printf("Linked list is a palindrome\n");
    else
        printf("Linked list is not a palindrome\n");

    free(head);
    free(second);
    free(third);

    return 0;
}