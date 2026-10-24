#include <stdio.h>
#include <stdlib.h>

// code to sort a linked list

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
    struct Node *p;
    int t, count = 0;
    char input[100];

    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));

    do
    {
        printf("Enter one positive head num: ");

        if(fgets(input, sizeof(input), stdin) != NULL &&
           sscanf(input, "%d", &head->data) == 1 &&
           head->data > 0)
        {
            head->next = second;
            break;
        }
        else
        {
            count++;
            printf("invalid\n");

            if(count == 3)
            {
                printf("limit exceeded\n");
                return 1;
            }
        }

    } while(1);

    do
    {
        printf("Enter one positive second num: ");

        if(fgets(input, sizeof(input), stdin) != NULL &&
           sscanf(input, "%d", &second->data) == 1 &&
           second->data > 0)
        {
            second->next = third;
            break;
        }
        else
        {
            count++;
            printf("invalid\n");

            if(count == 3)
            {
                printf("limit exceeded\n");
                return 1;
            }
        }

    } while(1);

    do
    {
        printf("Enter one positive third num: ");

        if(fgets(input, sizeof(input), stdin) != NULL &&
           sscanf(input, "%d", &third->data) == 1 &&
           third->data > 0)
        {
            third->next = NULL;
            break;
        }
        else
        {
            count++;
            printf("invalid\n");

            if(count == 3)
            {
                printf("limit exceeded\n");
                return 1;
            }
        }

    } while(1);

    for(int i = 0; i < 2; i++)
    {
        p = head;

        while(p->next != NULL)
        {
            if(p->data > p->next->data)
            {
                t = p->data;
                p->data = p->next->data;
                p->next->data = t;
            }

            p = p->next;
        }
    }

    p = head;

    while(p != NULL)
    {
        printf("%d -> ", p->data);
        p = p->next;
    }

    printf("NULL\n");

    free(head);
    free(second);
    free(third);

    return 0;
}