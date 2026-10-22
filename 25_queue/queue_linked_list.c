#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main(void)
{
    struct Node *front = NULL;
    struct Node *rear = NULL;
    struct Node *newnode;

    newnode = malloc(sizeof(struct Node));
    newnode->data = 10;
    newnode->next = NULL;

    front = newnode;
    rear = newnode;

    newnode = malloc(sizeof(struct Node));
    newnode->data = 20;
    newnode->next = NULL;

    rear->next = newnode;
    rear = newnode;

    printf("queue : ");
    newnode = front;

    while (newnode != NULL)
    {
        printf("%d ", newnode->data);
        newnode = newnode->next;
    }

    // delete from front
    newnode = front;
    printf("\ndeleted : %d", front->data);
    front = front->next;
    free(newnode);

    // to display after deletion
    printf("\nqueue after deletion : ");

    while (front != NULL)
    {
        printf("%d ", front->data);
        front = front->next;
    }

    printf("\n");
    return 0;
}