#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} Node;

int main(void)
{
    Node *root, *second, *third;

    root = malloc(sizeof(Node));
    second = malloc(sizeof(Node));
    third = malloc(sizeof(Node));

    root->data = 7;
    root->left = second;
    root->right = third;

    second->data = 2;
    second->left = NULL;
    second->right = NULL;

    third->data = 1;
    third->left = NULL;
    third->right = NULL;

    printf("root: %d\n", root->data);
    printf("left child: %d\n", root->left->data);
    printf("right child: %d\n", root->right->data);

    free(second);
    free(third);
    free(root);

    return 0;
}