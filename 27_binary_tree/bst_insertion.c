#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

int main(void)
{
    struct node *p = malloc(sizeof(struct node));
    struct node *p1 = malloc(sizeof(struct node));
    struct node *p2 = malloc(sizeof(struct node));
    struct node *newnode = malloc(sizeof(struct node));
    int num;

    p->data = 4;
    p->left = p1;
    p->right = p2;

    p1->data = 2;
    p1->left = NULL;
    p1->right = NULL;

    p2->data = 6;
    p2->left = NULL;
    p2->right = NULL;

    printf("enter num to insert: ");
    scanf("%d", &num);

    newnode->data = num;
    newnode->left = NULL;
    newnode->right = NULL;

    if (num < p->data)
    {
        p->left->right = newnode;
    }
    else
    {
        p->right->left = newnode;
    }

    printf("node inserted\n");
    return 0;
}