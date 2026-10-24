#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

int main(void)
{
    struct node *root, *p, *parent, *temp, *small, *before;
    int num;
    root = malloc(sizeof(struct node));
    root->data = 4;

    root->left = malloc(sizeof(struct node));
    root->left->data = 2;
    root->left->left = NULL;
    root->left->right = NULL;

    root->right = malloc(sizeof(struct node));
    root->right->data = 6;
    root->right->left = NULL;
    root->right->right = NULL;

    printf("enter number to delete : ");
    scanf("%d", &num);

    p = root;
    parent = NULL;

    while (p != NULL && p->data != num)
    {
        parent = p;

        if (num < p->data)
        {
            p = p->left;
        }
        else
        {
            p = p->right;
        }
    }

    if (p == NULL)
    {
        printf("num not found\n");
    }
    else
    {
        if (p->left != NULL && p->right != NULL)
        {
            before = p;
            small = p->right;

            while (small->left != NULL)
            {
                before = small;
                small = small->left;
            }

            p->data = small->data;
            p = small;
            parent = before;
        }

        if (p->left != NULL)
        {
            temp = p->left;
        }
        else
        {
            temp = p->right;
        }

        if (parent == NULL)
        {
            root = temp;
        }
        else if (parent->left == p)
        {
            parent->left = temp;
        }
        else
        {
            parent->right = temp;
        }

        free(p);
        printf("num deleted\n");
    }

    if (root != NULL)
    {
        printf("root : %d\n", root->data);
    }
    else
    {
        printf("tree is empty\n");
    }

    return 0;
}