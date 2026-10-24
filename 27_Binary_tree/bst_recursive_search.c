#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node *search(struct node *p, int num)
{
    if (p == NULL || p->data == num)
    {
        return p;
    }

    if (num < p->data)
    {
        return search(p->left, num);
    }

    return search(p->right, num);
}

int main(void)
{
    struct node *p = malloc(sizeof(struct node));
    struct node *p1 = malloc(sizeof(struct node));
    struct node *p2 = malloc(sizeof(struct node));
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

    printf("enter num to search: ");
    scanf("%d", &num);

    if (search(p, num) != NULL)
    {
        printf("element found\n");
    }
    else
    {
        printf("element not found\n");
    }

    free(p1);
    free(p2);
    free(p);
    return 0;
}