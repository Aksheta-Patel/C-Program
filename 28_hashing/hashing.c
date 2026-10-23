#include <stdio.h>
#define SIZE 10

// code of concept hashing

int table[SIZE];

int hash(int key)
{
    return key % SIZE;
}

void insert(int key)
{
    int i, pos;

    for (i = 0; i < SIZE; i++)
    {
        pos = (hash(key) + i) % SIZE;

        if (table[pos] == -1 || table[pos] == -2)
        {
            table[pos] = key;
            printf("Key inserted\n");
            return;
        }
    }

    printf("Hash table is full\n");
}

void search(int key)
{
    int i, pos;

    for (i = 0; i < SIZE; i++)
    {
        pos = (hash(key) + i) % SIZE;

        if (table[pos] == -1)
        {
            printf("Key not found\n");
            return;
        }

        if (table[pos] == key)
        {
            printf("Key found at index %d\n", pos);
            return;
        }
    }

    printf("Key not found\n");
}

void delete(int key)
{
    int i, pos;

    for (i = 0; i < SIZE; i++)
    {
        pos = (hash(key) + i) % SIZE;

        if (table[pos] == -1)
        {
            printf("Key not found\n");
            return;
        }

        if (table[pos] == key)
        {
            table[pos] = -2;
            printf("Key deleted\n");
            return;
        }
    }

    printf("Key not found\n");
}

void display(void)
{
    int i;

    for (i = 0; i < SIZE; i++)
    {
        if (table[i] == -1)
            printf("%d : Empty\n", i);
        else if (table[i] == -2)
            printf("%d : Deleted\n", i);
        else
            printf("%d : %d\n", i, table[i]);
    }
}

int main(void)
{
    int i, choice, key;

    for (i = 0; i < SIZE; i++)
        table[i] = -1;

    while (1)
    {
        printf("\n1. Insert\n");
        printf("2. Search\n");
        printf("3. Delete\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter key: ");
                scanf("%d", &key);
                insert(key);
                break;

            case 2:
                printf("Enter key: ");
                scanf("%d", &key);
                search(key);
                break;

            case 3:
                printf("Enter key: ");
                scanf("%d", &key);
                delete(key);
                break;

            case 4:
                display();
                break;

            case 5:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}