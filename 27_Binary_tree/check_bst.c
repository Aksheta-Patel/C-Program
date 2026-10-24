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

    p->data = 4;
    p->left = p1;
    p->right = p2;

    p1->data = 2;
    p1->left = NULL;
    p1->right = NULL;

    p2->data = 6;
    p2->left = NULL;
    p2->right = NULL;

    if (p1->data < p->data && p2->data > p->data)
    {  
        printf("bst\n");
    }
    else
    {   
        printf("Not a bst\n");
    }

    free(p1);
    free(p2);
    free(p);
    return 0;
}