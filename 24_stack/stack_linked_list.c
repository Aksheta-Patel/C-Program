#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main(void)
{
    struct node *top = NULL;
    struct node *newnode;

    newnode = malloc(sizeof(struct node));
    newnode->data = 10;
    newnode->next = top;
    top = newnode;

    newnode = malloc(sizeof(struct node));
    newnode->data = 20;
    newnode->next = top;
    top = newnode;

    // to display stack
    printf("Stack: ");

    newnode = top;

    while (newnode != NULL)
    {
        printf("%d ", newnode->data);
        newnode = newnode->next;
    }

    // pop
    newnode = top;
    printf("\npopped: %d\n", top->data);
    top = top->next;
    free(newnode);

    // display after pop
    printf("Stack after pop: %d\n", top->data);

    free(top);
    return 0;
}