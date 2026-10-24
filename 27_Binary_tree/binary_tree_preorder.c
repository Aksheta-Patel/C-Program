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
    struct node *p3 = malloc(sizeof(struct node));
    struct node *p4 = malloc(sizeof(struct node));

    p->data = 4;
    p->left = p1;
    p->right = p2;

    p1->data = 1;
    p1->left = p3;
    p1->right = p4;

    p2->data = 6;
    p2->left = NULL;
    p2->right = NULL;

    p3->data = 5;
    p3->left = NULL;
    p3->right = NULL;

    p4->data = 2;
    p4->left = NULL;
    p4->right = NULL;

    printf("%d ", p->data);
    printf("%d ", p->left->data);
    printf("%d ", p->left->left->data);
    printf("%d ", p->left->right->data);
    printf("%d\n", p->right->data);

    free(p3);
    free(p4);
    free(p1);
    free(p2);
    free(p);
    return 0;
}