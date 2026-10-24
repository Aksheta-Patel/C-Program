#include <stdio.h>
#include <stdlib.h>

// code to create a linked list

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
    struct Node *newnode;
    struct Node *temp;


    // allocate memory for nodes
    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));

    // store data and connect nodes
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    // insertion at beggining
    newnode=malloc(sizeof(newnode));
    newnode->data=5;
    newnode->next=head;
    head=newnode;


   while(head!= NULL)
   {
     printf("%d\n",head->data);
     head=head->next;
   }
    free(head);
    free(second);
    free(third);
    free(newnode);

    return 0;
}